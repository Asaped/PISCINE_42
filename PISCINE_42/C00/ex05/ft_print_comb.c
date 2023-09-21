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

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	k = 2;
	while (i <= 7)
	{
		while (j <= 8)
		{
			while (k <= 9)
			{
				ft_putnbr(i);
				ft_putnbr(j);
				ft_putnbr(k);
				if (i == 7 && j == 8 && k == 9)
					return ;
				write(1, ", ", 2);
				k++;
			}
			j++;
			k = j;
		}
		i++;
		j = i;
	}
}
int main()
{
	ft_print_comb();
}
