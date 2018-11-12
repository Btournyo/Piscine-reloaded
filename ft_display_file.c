/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tournyol <tournyol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 08:04:35 by tournyol          #+#    #+#             */
/*   Updated: 2018/11/12 08:15:04 by tournyol         ###   ########.fr       */
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