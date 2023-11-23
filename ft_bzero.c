#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}
/*#include <stdio.h>
int main()
{
    char s[] = "Hello";
    ft_bzero(s, 3);
    printf("%c", s[3]);
}*/