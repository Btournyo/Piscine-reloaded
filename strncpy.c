#include <stdio.h>
#include <string.h>

char *ft_strncpy( char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

int	main()
{
	char dest[255] = "johnny forever";
	char src[255] = "chemins qui se croisent";
	
	printf("%s\n", ft_strncpy(dest, src, 3));
	printf("%s\n", strncpy(dest, src, 3));
	return (0);
}
