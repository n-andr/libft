/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandreev <nandreev@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:49:10 by nandreev          #+#    #+#             */
/*   Updated: 2023/12/06 15:50:36 by nandreev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static char	**split_words(char *result[], char const *s, char c, int words)
{
	int				i;
	unsigned int	len;
	unsigned int	start;

	i = 0;
	len = 0;
	start = 0;
	while (i < words - 1)
	{
		if (*(s + start) == c || *(s + start) == '\0')
		{
			result[i] = ft_substr(s, start - len, len);
			len = 0;
			i ++;
		}
		else
			len ++;
		if (*(s + start) == '\0')
			break ;
		start ++;
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**result;
	char	*sdub;

	i = 0;
	sdub = (char *)s;
	while (*sdub != '\0')
	{
		if (*sdub == c)
			i++;
		sdub++;
	}
	result = malloc((i + 2) * sizeof(char *));
	if (result == 0)
		return (NULL);
	split_words(result, s, c, i + 2);
	return (result);
}

/*#include <stdio.h>

int main() {
	char const *input_string = "split me pls ";
	char delimiter = ' ';

	printf("Original String: %s\n", input_string);
	printf("Delimiter: %c\n", delimiter);

	char **result = ft_split(input_string, delimiter);

	if (result) {
		printf("\nSplit Result:\n");
		char **temp = result; // Fix: Create a temporary pointer
		while (*temp)
		{
			printf("%s\n", *temp);
			temp++;
		}
		free(result);
	} else {
		printf("\nError: Memory allocation failed or input string is empty.\n");
	}

	return 0;
}*/