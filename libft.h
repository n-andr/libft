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

int	ft_isalpha(int a);
int	ft_isdigit(int a);
int	ft_isalpha(int a);
int	ft_isascii(int a);
int	ft_strlen(char *str);
void *ft_memset(void *ptr, int value, size_t num);
void ft_bzero(void *s, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);