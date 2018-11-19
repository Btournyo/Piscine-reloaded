/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btournyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 11:13:03 by btournyo          #+#    #+#             */
/*   Updated: 2018/11/13 11:28:36 by btournyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c)
{
	if (c <= 32) 
		return (0);
	return (1);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		printf("%d\n", isprint((int)av[1][0]));
		printf("%d", ft_isprint((int)av[1][0]));
	}
	return (0);
}
