char	*ft_strncat(char *dest, char *src, int nb)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while(dest[a])
		a++;
	while (src[b] && nb != 0)
	{
		dest[a + b] = src[b];
		b++;
		nb--;
	}
	dest[a + b] = '\0';
	return (dest);
}
