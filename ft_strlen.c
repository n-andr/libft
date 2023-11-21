/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandreev <nandreev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:37:12 by nandreev          #+#    #+#             */
/*   Updated: 2023/10/17 17:38:08 by nandreev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str != '\0')
	{
		str ++;
		length ++;
	}
	return (length);
}

/*#include <stdio.h>

int main(void)
{
    char str[] = "Hi";

    printf("Length of the string: %d\n",ft_strlen(str));
}*/
