/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandreev <nandreev@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:48:36 by nandreev          #+#    #+#             */
/*   Updated: 2023/12/06 15:50:36 by nandreev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *) str)[i] == (unsigned char) c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "teststring 146 .0";
   const char ch = '8';

   printf("String after |%c| is - |%p|\n", ch, memchr(str, ch, 15));
   printf("String after |%c| is - |%p|\n", ch, ft_memchr(str, ch, 15));

   return(0);
}*/