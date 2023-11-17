/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandreev <nandreev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:44:02 by nandreev          #+#    #+#             */
/*   Updated: 2023/11/17 18:14:42 by nandreev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int a)
{
    if (a >= 00 && a <= 127)
    {
        return (a);
    }
    else
        return (0);
}
//what happens if i return 0(00/NULL)? do i need to return in HEX or DEC?



/*#include <stdio.h>

int    main()
{
    printf("ft_isascii('7')=%d\n", ft_isascii('7'));
    printf("ft_isascii('-')=%d\n", ft_isascii('-'));
}*/