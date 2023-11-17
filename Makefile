# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nandreev <nandreev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/17 16:02:49 by nandreev          #+#    #+#              #
#    Updated: 2023/11/17 16:03:09 by nandreev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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