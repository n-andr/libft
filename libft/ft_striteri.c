/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandreev <nandreev@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:49:06 by nandreev          #+#    #+#             */
/*   Updated: 2023/12/08 21:53:12 by nandreev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

/*#include <stdio.h>

void capitalise(unsigned int i, char *c)
{
	*c = *c + 'A' - 'a';
}

int main(void)
{
	char str[] = "qwerty";
	printf("%s\n",str);
	ft_striteri(str, capitalise);
	
	printf("%s\n",str);
}*/