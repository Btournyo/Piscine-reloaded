/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btournyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:08:31 by btournyo          #+#    #+#             */
/*   Updated: 2018/11/12 17:40:07 by btournyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bds\string.h>
#include <stdlib.h>

size_t ft_strlcat( char *dst, const char *src, size_t size )
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j])
		dst[i++] = src[j++];
	dst[i++] = '\0';
	return (size + i - 1);
}

int	main(int ac, char **av)
{
	if (ac > 3)
	{
		printf("%ld\n", ft_strlcat(av[1], av[2], (size_t)av[3]));
		printf("%d", strlcat(av[1], av[2], (size_t)av[3]));
	}
	return(0);
}