char	*ft_strupcase(char *str)
{
	int		i;
	int		character;

	i = 0;
	while (str[i] != '\0')
	{
		character = str[i];
		if (character >= 97 && character <= 122)
		{
			str[i] = character - 32;
		}
		i++;
	}
	return (str);
}
