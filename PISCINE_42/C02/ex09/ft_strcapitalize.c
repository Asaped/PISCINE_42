/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moturki <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:40:39 by moturki           #+#    #+#             */
/*   Updated: 2023/09/13 21:23:34 by moturki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_alpha(str[i]) && (!is_alpha(str[i - 1]) || i == 0))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
			i++;
			while (is_alpha(str[i]))
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] += 32;
				i++;
			}
		}
		else
			i++;
	}
	return (str);
}
