/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandreev <nandreev@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:49:24 by nandreev          #+#    #+#             */
/*   Updated: 2023/12/06 15:50:36 by nandreev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ret;

	i = 0;
	while (*dst && i < dstsize)
	{
		++dst;
		++i;
	}
	ret = ft_strlcpy(dst, src, dstsize - i);
	return (ret + i);
}
/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char destination[20] = "Hello, ";
	const char source[] = "World!";
	size_t result;

	// Print the initial content of the destination array
	printf("Before ft_strlcat: %s\n", destination);

	// Call ft_strlcat to concatenate the source string to the destination
	result = ft_strlcat(destination, source, sizeof(destination));

	// Print the result and the modified content of the destination array
	printf("Result: %zu\n", result);
	printf("After ft_strlcat: %s\n", destination);

	return 0;
}*/