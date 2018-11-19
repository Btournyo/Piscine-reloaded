#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src,size_t n)
{
	char *dest1 = (char *)dest;
	char *src1 = (char *)src;
	unsigned int i;
	int size_s;
	int size_d;

	i = 0;
	size_s = ft_strlen(src1);
	size_d = ft_strlen(dest1);
	if (dest1 != (const char *)(malloc((size_s + size_d) * sizeof(dest[0]))))
		return (0);
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest1);	
}

int	main(void)
{
	char csrc[] = "lala lala lala";
	char cdest[500];
	int isrc[]= {10, 50, 67, 890, 2};
	int n = sizeof(isrc)/sizeof(isrc[0]);
	int idest[n];
	int i = 0;

	ft_memcpy(cdest, csrc, ft_strlen(csrc)+1);
	printf("%s\n", cdest);
/*	ft_memcpy(idest, isrc, sizeof(isrc));
	while (i < n)
	{
		printf("%d", idest[i]);
		i++;
	}
*/	return (0);
}
