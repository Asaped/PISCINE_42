/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moturki <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:00:54 by moturki           #+#    #+#             */
/*   Updated: 2023/09/18 17:53:01 by moturki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_word(char *str, char *set)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (!is_charset(str[i], set)
			&& (!str[i + 1] || is_charset(str[i + 1], set)))
			count++;
		i++;
	}
	return (count);
}

int	ft_strlen(char *str, char *set)
{
	int	i;

	i = 0;
	if (!str)
		return (i);
	while (str[i] && !is_charset(str[i], set))
		i++;
	return (i);
}

char	*set_word(char *s1, char *s2, char *set)
{
	int	i;

	i = 0;
	s1 = malloc(sizeof(char) * (ft_strlen(s2, set) + 1));
	if (!s1)
		return (NULL);
	while (s2[i] && !is_charset(s2[i], set))
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = 0;
	return (s1);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		count;

	i = 0;
	if (!str)
		return (NULL);
	count = count_word(str, charset);
	tab = malloc(sizeof(char *) * (count + 1));
	if (!tab)
		return (NULL);
	while (i < count)
	{
		while (*str && is_charset(*str, charset))
			str++;
		tab[i] = set_word(tab[i], str, charset);
		while (*str && !is_charset(*str, charset))
			str++;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
/*#include <stdio.h>
int main(int ac, char **av)
{
	int	i = 0;
	char **tab;
	(void)ac;
	tab = ft_split(av[1], av[2]);
	while (tab[i])
		printf("%s\n", tab[i++]);
}*/
