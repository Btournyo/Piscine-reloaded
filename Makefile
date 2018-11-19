
NAME: libft.a
FILES:
	*.c
SOURCES:
	*.o

all: $(NAME)
$(NAME):
	gcc -c -Wall -Wextra -Werror $(FILES)
	ar rc libft.a $(OBJECTS)
	ranlib libft.a
clean:
	/bin/rm -f $(SOURCES)
fclean:
	/bin/rm -f $(NAME)
re:
	fclean all
