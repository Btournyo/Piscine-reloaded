/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tournyol <tournyol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:40:44 by tournyol          #+#    #+#             */
/*   Updated: 2018/11/09 11:06:30 by tournyol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

char    *ft_strdup(char *src)
{
	char	*dest;
	char	*copy;
	int		size;

	size = ft_strlen(src);
	dest = "NULL";
	dest = malloc(sizeof(*dest) * (size + 1));
	copy = dest;
	while (*src)
		*copy++ = *src++;
	*copy = '\0';
	return (dest);
}