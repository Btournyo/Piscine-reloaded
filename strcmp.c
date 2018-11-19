int	ft_strcmp(char *s1, char *s2)
{
	int a;

	a = -1;
	while (s1[a + 1] && s2[a + 1])
	{
		a++;
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
	}
	return (s1[a] - s2[a]);
}
