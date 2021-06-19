char	*ft_strlowcase(char *str)
{
	int		i;
	int		character;

	i = 0;
	while (str[i] != '\0')
	{
		character = str[i];
		if (character >= 65 && character <= 90)
		{
			str[i] = character + 32;
		}
		i++;
	}
	return (str);
}
