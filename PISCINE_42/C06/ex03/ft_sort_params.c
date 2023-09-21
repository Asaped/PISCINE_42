/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moturki <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:47:47 by moturki           #+#    #+#             */
/*   Updated: 2023/09/21 16:54:10 by moturki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (((unsigned char)s1[i] - (unsigned char)s2[i]));
		i++;
	}
	return (((unsigned char)s1[i] - (unsigned char)s2[i]));
}

char	**ft_sort_params(int ac, char **av)
{
	char	*tmp;
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (i < ac - 1)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			tmp = av[i];
			av[i] = av[i + 1];
			av[i + 1] = tmp;
			i = 0;
		}
		j = 0;
		i++;
	}
	return (av);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (ac > 1)
	{
		av = ft_sort_params(ac, av);
		while (av[i])
		{
			while (av[i][j])
				write(1, &av[i][j++], 1);
			write(1, "\n", 1);
			j = 0;
			i++;
		}
	}
	return (0);
}
