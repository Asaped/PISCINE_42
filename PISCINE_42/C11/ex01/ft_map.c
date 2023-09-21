/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moturki <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 23:37:26 by moturki           #+#    #+#             */
/*   Updated: 2023/09/18 19:43:38 by moturki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*bruh;

	i = 0;
	bruh = malloc(sizeof(int) * length);
	if (!bruh)
		return (NULL);
	while (i < length)
	{
		bruh[i] = f(tab[i]);
		i++;
	}
	return (bruh);
}
