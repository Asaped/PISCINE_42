/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moturki <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:17:10 by moturki           #+#    #+#             */
/*   Updated: 2023/09/21 17:27:22 by moturki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (i);
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dst_size;
	unsigned int	src_size;
	unsigned int	res;

	i = 0;
	src_size = ft_strlen(src);
	dst_size = ft_strlen(dest);
	if (size <= dst_size)
		res = src_size + size;
	else
		res = src_size + dst_size;
	while (i + dst_size < size - 1 && src[i])
	{
		dest[i + dst_size] = src[i];
		i++;
	}
	dest[i + dst_size] = 0;
	return (res);
}
