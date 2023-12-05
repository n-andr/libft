/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandreev <nandreev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:03:24 by nandreev          #+#    #+#             */
/*   Updated: 2023/11/17 17:40:13 by nandreev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdlib.h>

int	ft_isalpha(int a);
int	ft_isdigit(int a);
int	ft_isalpha(int a);
int	ft_isascii(int a);
int	ft_strlen(char *str);
void *ft_memset(void *ptr, int value, size_t num);
void ft_bzero(void *s, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int ft_toupper(int c);
int	ft_tolower(int c);
char    *ft_strchr (const char *s, int c);
char    *ft_strrchr (const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void    *ft_memchr(const void *str, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
char    *ft_strnstr(const char *big, const char *little, size_t len);
int	ft_atoi(const char *str);
void *ft_calloc(size_t n_items, size_t size);
char    *ft_strdup(const char *str1);
/*Part 2*/
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);