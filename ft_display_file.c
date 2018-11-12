/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btournyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 08:25:48 by btournyo          #+#    #+#             */
/*   Updated: 2018/11/12 08:25:55 by btournyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_display_file(int fd)
{
    char c;

    while(read(fd, &c, 1) != 0))
        write(1, &c, 1);
}

int main(void)
{
    int fd;

    if (ac != 2)
    {
        if(ac > 2)
            write(2, "too many arguments", 19);
        if(ac < 2)
            write(2, "not enough arguments", 21);
        return(1);
    }
    fd = open(av[1], O_RDONLY);
    ft_display_file(fd);
    close(fd);
    return(0);
}