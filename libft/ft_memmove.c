/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandreev <nandreev@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:48:50 by nandreev          #+#    #+#             */
/*   Updated: 2023/12/06 15:50:36 by nandreev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*srcc;
	char		*dstc;
	size_t		i;

	i = 0;
	srcc = (char *)src;
	dstc = (char *)dst;
	if (dst == NULL && src == NULL)
	{
		return (dst);
	}
	if (srcc < dstc)
	{
		while (len--)
			*(dstc + len) = *(srcc + len);
	}
	else
	{
		while (i < len)
		{
			*(dstc + i) = *(srcc + i);
			i++;
		}
	}
	return (dst);
}

/*#include <stdio.h>

int main()
{
	char source[] = "Hello, World!";
	char destination[20];

	// Using ft_memmove to move from source to destination
	ft_memmove(destination, source, 5);
	// Print the content of the destination array
	printf("Moved String: %s\n", destination);

	return 0;
}*/