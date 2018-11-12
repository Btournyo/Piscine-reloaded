# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btournyo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/12 08:26:15 by btournyo          #+#    #+#              #
#    Updated: 2018/11/12 08:26:20 by btournyo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = ft_display_file

SRC = ft_display_file.c

FLAGS = -Wall -Wextra -Werror

OPTIONS = -c

all: ft_display_file.o
	$(CC) $(FLAGS) ft_display_file.o -o $(NAME)

ft_display_file.o: $(SRC)
	$(CC) $(FLAGS) -c $(SRC)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)
