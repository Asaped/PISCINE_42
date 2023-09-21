/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moturki <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:26:34 by moturki           #+#    #+#             */
/*   Updated: 2023/09/05 14:26:42 by moturki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*src2;

	i = 0;
	if (!src)
		return (NULL);
	while (src[i])
		i++;
	src2 = (char *)malloc(sizeof(char) * (i + 1));
	if (!src2)
		return (NULL);
	i = 0;
	while (src[i])
	{
		src2[i] = src[i];
		i++;
	}
	src2[i] = 0;
	return (src2);
}
