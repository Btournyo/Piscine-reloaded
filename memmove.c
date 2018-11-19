#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *dest1 = (char *)dest;
	char *src1 = (char *)src;
	char temp[n];
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (temp != (char *)(malloc(n * sizeof(dest1))))
		return (0);
	while (i++ < n)
		temp[i] = src1[i];
	while (j++ < n)
		dest1[j] = temp[j];
	free(temp);
	return (dest1);
}

int	main(void)
{
	char csrc[100] = "sous le pont mirabeau";
	ft_memmove(csrc + 5, csrc, strlen(csrc) + 1);
	printf("%s\n", csrc);
	return (0);
}
