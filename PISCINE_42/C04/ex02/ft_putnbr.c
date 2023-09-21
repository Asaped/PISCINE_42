/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moturki <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:17:31 by moturki           #+#    #+#             */
/*   Updated: 2023/08/31 17:29:18 by moturki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		i;
	int		nbr;

	i = 1;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb == -2147483648)
		return ;
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	nbr = nb;
	while (nbr / 10 > 0)
	{
		nbr /= 10;
		i *= 10;
	}
	while (i)
	{
		ft_putchar(nb / i + 48);
		nb %= i;
		i /= 10;
	}
}
