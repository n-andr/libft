/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandreev <nandreev@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:49:06 by nandreev          #+#    #+#             */
/*   Updated: 2023/12/06 15:50:36 by nandreev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	char	*new;
	size_t	i;

	new = (char *)ptr;
	i = 0;
	while (i < num)
	{
		new[i] = value;
		i++;
	}
	return (new);
}
/*#include <stdio.h>

int main() {
	char buffer[10] = "help";

	// Using your custom memset function
	ft_memset(buffer, 'A', 3);
	// Print the contents of the buffer
	printf("Buffer after ft_memset: %s\n", buffer);

	return 0;
}*/