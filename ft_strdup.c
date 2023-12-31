/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandreev <nandreev@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:49:16 by nandreev          #+#    #+#             */
/*   Updated: 2023/12/06 15:50:36 by nandreev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	char	*str2;
	size_t	len;

	len = ft_strlen((char *)str1);
	str2 = malloc((len + 1) * sizeof(char));
	if (str2 == 0)
		return (NULL);
	ft_strlcpy(str2, str1, len + 1);
	return (str2);
}

/*#include <stdlib.h>
#include<stdio.h>

 
int main(void)
{
	const char *s1 = "String999";
	char *s2 = ft_strdup(s1);
	printf("%s", s2);
	free(s2);
}*/