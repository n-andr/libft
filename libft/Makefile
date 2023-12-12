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

CC = cc

CFLAGS = -Wall -Wextra -Werror

SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c \
		ft_isascii.c ft_isprint.c ft_atoi.c \
		ft_bzero.c ft_calloc.c ft_itoa.c \
		ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c \
		ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_putstr_fd.c ft_split.c ft_strchr.c \
		ft_strdup.c ft_striteri.c ft_strjoin.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c \
		ft_strmapi.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_strtrim.c ft_substr.c \
		ft_tolower.c ft_toupper.c
BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
		ft_lstlast.c ft_lstadd_back.c

OBJS := $(SOURCES:%.c=%.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rc $(NAME) $(BONUS_OBJS) $(OBJS)

clean:
	rm -rf $(OBJS)
	rm -f *.o

fclean: clean
	rm -Rf $(NAME)

re: fclean all 

.PHONY: all bonus clean fclean re