/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandreev <nandreev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:03:46 by nandreev          #+#    #+#             */
/*   Updated: 2023/11/17 17:44:16 by nandreev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int a)
{
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    {
        return (a);
    }
    else
        return (0);
}


/*#include <stdio.h>
int main()
{
    printf("ft_isalpha('a')=%d\n", ft_isalpha('a'));
    printf("ft_isalpha('-')=%d\n", ft_isalpha('-'));
}*/