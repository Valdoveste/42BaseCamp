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

char	*ft_check_first_characters(int count, char *str)
{
	int		character;

	character = str[0];
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = (character - 32);
	}
	if ((str[count] >= ' ' && str[count] <= '/')
		&& (str[count + 1] >= 'a' && str[count + 1] <= 'z'))
	{
		character = str[count + 1];
		str[count + 1] = (character - 32);
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	*str_low;

	str_low = ft_strlowcase(str);
	i = 0;
	while (str_low[i] != '\0')
	{
		ft_check_first_characters(i, str_low);
		i++;
	}
	return (str_low);
}
