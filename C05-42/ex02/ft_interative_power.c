#include <stdio.h>
int	ft_interative_power(int nb, int power)
{	
	int 	i;
	int		pow;

	i = 1;
	pow = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (i < power)
	{
		pow *= nb;
		i++;
	}
	return (pow);
}

int main()
{
	printf("%d\n", ft_interative_power(10, 2));
}