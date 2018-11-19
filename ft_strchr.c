/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btournyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:45:41 by btournyo          #+#    #+#             */
/*   Updated: 2018/11/13 15:18:07 by btournyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <libft.a>

char *ft_strchr(const char *s, int c)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)s);
		i++;
	}
	if (s[i] == '\0' && !c)
		return ((char *)s);
	return (NULL);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		printf("%s\n", strchr(av[1], atoi(av[2])));
		printf("%s\n", ft_strchr(av[1], atoi(av[2])));
	}
	return (0);
}