/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandreev <nandreev@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:49:39 by nandreev          #+#    #+#             */
/*   Updated: 2023/12/06 15:50:36 by nandreev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s1;
	size_t	beginning;
	int		end;
	char	*s_trim;

	len_s1 = ft_strlen((char *)s1);
	beginning = 0;
	while (is_in_set(s1[beginning], set) == 1)
		beginning ++;
	if (beginning >= len_s1)
		return (ft_strdup(""));
	end = 0;
	while (is_in_set(s1[len_s1 - 1 - end], set) == 1)
		end ++;
	s_trim = malloc ((len_s1 - beginning - end + 1) * sizeof(char));
	if (s_trim == 0)
		return (NULL);
	ft_strlcpy(s_trim, s1 + beginning, (len_s1 - beginning - end + 1));
	return (s_trim);
}

/*#include <stdlib.h>
#include<stdio.h>

int main(void)
{
	const char *s1 = "qwerty";
	const char *set = "qwer99";
	char *s_trim = ft_strtrim(s1, set);
	printf("before \n%s\n", s1);
	printf("after \n%s\n", s_trim);
	free(s_trim);
}*/