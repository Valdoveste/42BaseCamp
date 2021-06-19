// #include <stdio.h>
int	ft_interative_power(int nb, int power)
{	
	int 	i;
	int		pow;

	i = 0;
	pow = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);

	if (power > 0)
		return (pow * ft_interative_power(nb, power - 1));
	else
		return (1);
}

// int main()
// {
// 	printf("%d\n", ft_interative_power(10, 2));
// 	printf("%d\n", ft_interative_power(10, 3));
// 	printf("%d\n", ft_interative_power(10, 4));
// 	printf("%d\n", ft_interative_power(10, 5));
// 	printf("%d\n", ft_interative_power(10, 6));
// }
