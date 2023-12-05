#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub_s;

    sub_s = malloc((len+1) * sizeof(char));
    if (sub_s == 0)
        return (NULL);
    ft_strlcpy(sub_s, s + start, len + 1);
    return(sub_s);
}

/*#include <stdlib.h>
#include<stdio.h>

int main(void)
{
    const char *s1 = "String";
    char *s2 = ft_substr(s1, 1, 3);
    printf("%s", s2);
    if (s2[4] == '\0')
        printf("\nyes\n");
    free(s2);
}*/