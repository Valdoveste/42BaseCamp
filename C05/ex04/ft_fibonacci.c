#include <stdio.h>

int	ft_fibonacci(int index)
{
	int result;

	if(index > 1)
	{
		result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (result);
	}
	else
	{
		return (-1);
	}
}

int	main()
{
	printf("%d, ", ft_fibonacci(2));
}