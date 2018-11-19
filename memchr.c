#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s,int c, size_t n)
{
	char	*s1 = (char *)s;
	unsigned int i;

	i = 0;
	while (i < n && s1)
	{
		if (s1[i] == c)
			return (s1);
		i++;
	}
	return (0);	
}

int	main()
{
	char s2[255];
	memset(&s2, '*', 50);
	printf("'?' FIND ? %s\n", ft_memchr(s2, '?', 50)? "TRUE" : "FALSE");
	printf("'a' FIND ? %s\n", ft_memchr(s2, 'a', 50)? "TRUE" : "FALSE");
	printf("'*' FIND ? %s\n", ft_memchr(s2, '*', 50)? "TRUE" : "FALSE");
	printf("'0' FIND ? %s\n", ft_memchr(s2, '0', 50)? "TRUE" : "FALSE");
	printf("Retour du '?' = %s\n", ft_memchr(s2, '?', 50)? "TRUE" : "FALSE");
	return (0);
}
