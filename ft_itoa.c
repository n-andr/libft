/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandreev <nandreev@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:02:30 by nandreev          #+#    #+#             */
/*   Updated: 2023/12/07 17:30:35 by nandreev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int     nlen(long ndup)
{
    int len;

    len = 1;
    if (ndup < 0)
    {
        len++;
        ndup *= -1;
    }
    while (ndup > 9)
    {
        ndup /= 10;
        len++;
    }
    return (len);
}

static void     put_n(long ndup, char *result, int len)
{
    int i;

    i = 0;
    if (ndup < 0)
    {
        result[i] = '-';
        ndup *= -1;
    }
    while (ndup != 0)
    {
        result[len-i-1] = ndup % 10 + '0';
        ndup /= 10;
        i++;
    }
}


char    *ft_itoa(int n)
{
    char    *result;
    int     len;
    long    ndup;
    
    ndup = n;
    len = nlen(ndup);
    result = malloc(sizeof(char) * (len + 1));
    if (result == 0)
        return (NULL);
    if (n == 0)
        result[0] = '0';
    put_n(ndup, result, len);
    result[len] = '\0';
    return (result);
}

/*#include <stdio.h>

int main() {
    int num = -1230;

    printf("Number: %d\n", num);
    printf("String: %s\n", ft_itoa(num));

    int num2 = 0;

    printf("Number: %d\n", num2);
    printf("String: %s\n", ft_itoa(num2));
    
    int num3 = 2147483647;

    printf("Number: %d\n", num3);
    printf("String: %s\n", ft_itoa(num3));

    int num4 = -2147483648;

    printf("Number: %d\n", num4);
    printf("String: %s\n", ft_itoa(num4));

    int num5 = 1;

    printf("Number: %d\n", num5);
    printf("String: %s\n", ft_itoa(num5));
   
    num5 = -1;

    printf("Number: %d\n", num5);
    printf("String: %s\n", ft_itoa(num5));

    num5 = -1000;

    printf("Number: %d\n", num5);
    printf("String: %s\n", ft_itoa(num5));


    return 0;
}*/