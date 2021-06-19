void 	ft_ultimate_div_mod(int *a, int *b)
{
	int		aux[2];

	aux[0] = *a / *b;
	aux[1] = *a % *b;
	*a = aux[0];
	*b = aux[1];
}
