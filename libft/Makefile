# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nandreev <nandreev@student.42berlin.de     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/17 16:02:49 by nandreev          #+#    #+#              #
#    Updated: 2023/12/06 15:50:36 by nandreev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SOURCES = $(addprefix ft_, $(addsuffix .c, \
		isalpha isdigit isalnum \
		isascii isprint atoi \
		bzero calloc itoa \
		memchr memcmp memcpy \
		memmove memset \
		putchar_fd putendl_fd putnbr_fd \
		putstr_fd split strchr \
		strdup striteri strjoin \
		strlcat strlcpy strlen \
		strmapi strncmp strnstr \
		strrchr strtrim substr \
		tolower toupper))

OBJS := $(SOURCES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)
	rm -f *.o

fclean: clean
	rm -Rf $(NAME)

re: fclean all 