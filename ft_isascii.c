/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandreev <nandreev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:44:02 by nandreev          #+#    #+#             */
/*   Updated: 2023/11/29 17:48:16 by nandreev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int a)
{
    if (a >= 0 && a <= 127)
    {
        return (1);
    }
    else
        return (0);
}
/*#include <stdio.h>

int    main()
{
    printf("ft_isascii('7')=%d\n", ft_isascii('7'));
    printf("ft_isascii('128')=%d\n", ft_isascii('128'));
}*/