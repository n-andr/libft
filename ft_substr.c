/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandreev <nandreev@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:49:42 by nandreev          #+#    #+#             */
/*   Updated: 2023/12/06 15:50:36 by nandreev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub_s;
	unsigned int	slen;

	slen = (unsigned int)ft_strlen((char *)s);
	if (start >= slen)
		return (ft_strdup(""));
	if (start + len >= slen)
		len = slen - start;
	sub_s = malloc((len + 1) * sizeof(char));
	if (sub_s == 0)
		return (NULL);
	ft_strlcpy(sub_s, s + start, len + 1);
	return (sub_s);
}

/*#include <stdlib.h>
#include<stdio.h>

int main(void)
{
	const char *s1 = "String";
	
	char *s2 = ft_substr(s1, 1, 3);
	printf("%s", s2);
	if (s2[4] == '\0')
		printf("\nyes\n");
	free(s2);
}*/