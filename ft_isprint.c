/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandreev <nandreev@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:44:02 by nandreev          #+#    #+#             */
/*   Updated: 2023/12/06 15:50:36 by nandreev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int a)
{
	if (a >= 32 && a <= 126)
	{
		return (1);
	}
	else
		return (0);
}
/*#include <stdio.h>
int main(void)
{
    printf ("result of %s is %d\n", "a", ft_isprint('a'));
    printf ("result of %s is %d\n", "\n", ft_isprint('\n'));
    return(0);
}*/