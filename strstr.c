char	*ft_strstr(char *str, char *to_find)
{
	int 	i;
	int 	j;
	char 	*find;

	i = 0;
	find = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i +j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
