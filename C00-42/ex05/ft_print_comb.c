#include <unistd.h>

void	ft_putchar(char x, char y, char z)
{
	if (x < y && y < z)
	{
		if (x == '7' && y == '8' && z == '9')
		{		
			write(1, &x, 1);
			write(1, &y, 1);
			write(1, &z, 1);
		}
		else
		{
			write(1, &x, 1);
			write(1, &y, 1);
			write(1, &z, 1);
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	y = '0';
	z = '0';
	while (x <= '9')
	{
		y = x + 1;
		while (y <= '9')
		{
			z = y + 1;
			while (z <= '9')
			{
				ft_putchar(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}
