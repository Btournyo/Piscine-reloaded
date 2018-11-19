#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	char *s1 = s;
	unsigned char c1 = c;

//	if (s != (*char)(malloc((n + 1) * sizeof(*s))))
//		return (0);
	while (n != 0)
	{
		*s1 = c1;
		s1++;
		n--;
	}
	return (s);
}

int	main(void)
{
	char str[] = "sous le pont mirabeau coule la Seine";
	int tab[] = {14, 17, 98, 60};
	int i;

	i = 0;
	ft_memset(str, '-', 6*sizeof(str[0]));
	ft_putstr(str);
	ft_memset(tab, 0, 3*sizeof(tab[0]));
	while (i < 4)
		printf("%d\n",tab[i++]);
	return (0);
}

