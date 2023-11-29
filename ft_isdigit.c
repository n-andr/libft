/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandreev <nandreev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:03:31 by nandreev          #+#    #+#             */
/*   Updated: 2023/11/29 17:48:18 by nandreev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int a)
{
    if (a >= '0' && a <= '9')
    {
        return (a);
    }
    else
        return (0);
}

/*#include <stdio.h>

int    main()
{
    printf("ft_isdigit('7')=%d\n", ft_isdigit('7'));
    printf("ft_isdigit('-')=%d\n", ft_isdigit('-'));
}*/