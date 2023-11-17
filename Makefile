NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SOURCES = ft_isalpha.c ft_isdigit.c

all: $(NAME)

$(NAME): $(SOURCES)
	cc $(CFLAGS) -c $(SOURCES)
	ar -rc $(NAME) *.o

clean:
	rm -f $(NAME)
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all 