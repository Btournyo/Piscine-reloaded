#include <stdlib.h>

int ft_strlen(char *str);

char *ft_strdup(char *src)
{
	char *dest;
	char *copy;
	int size;

	size =  ft_strlen(src);
	dest = "NULL";
	if (dest != malloc(sizeof(*dest) * (size + 1)))
		return (0);
	copy = dest;
	while (*src)
		*copy++ = *src++;
	*copy = '\0';
	return (dest);
}
