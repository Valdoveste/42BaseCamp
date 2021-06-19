#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	result[10];
	int		i;

	if (nb == 0)
		ft_putchar('0');
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	if (nb == -2147483648)
		write(1, "2147483648", 10);
	i = 0;
	while (nb > 0)
	{
		result[i] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}
	while (--i >= 0)
	{
		ft_putchar(result[i]);
	}
}
