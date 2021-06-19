#include <stdio.h>
int	ft_recursive_factorial(int nb)	
{
	int		fac;

	fac = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

int	main()
{
	printf("%d\n", ft_recursive_factorial(10));
	return (0);
}
