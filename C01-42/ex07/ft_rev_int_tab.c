#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		aux;
	int		count;

	count = 0;
	while (count < size / 2)
	{
		aux = tab[count];
		tab[count] = tab[size - count - 1];
		tab[size - count - 1] = aux;
		count++;
	}
}
