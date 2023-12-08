/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandreev <nandreev@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:49:33 by nandreev          #+#    #+#             */
/*   Updated: 2023/12/06 15:50:36 by nandreev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0 || (*s1 == '\0' && *s2 == '\0'))
		return (0);
	while (s1[i] == s2[i] && (i < n - 1) && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
#include <string.h>
int main() {
	char str1[] = "2";
	char str2[] = "1";

	printf("%d\n", ft_strncmp(str1, str2, 1));
	printf("%d\n", strncmp(str1, str2, 1));
	return 0;
}*/
