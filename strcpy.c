#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int i;
	
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (0);
}

int	main()
{
	char dest[255] = "sous le pont Mirabeau";
	char src[255] = "coule la Seine";
	
	ft_strcpy(dest, src);
	printf("%s", dest);
//	printf("%s", strcpy(dest, src));
	return (0);
}
