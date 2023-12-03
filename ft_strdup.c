#include "libft.h"
#include <string.h>


char    *ft_strdup(const char *str1)
{
    char        *str2;
    size_t      len;

    len = ft_strlen((char *)str1);
    str2 = malloc((len+1) * sizeof(char));
    if (len == 0)
        return (NULL);
    ft_strlcpy(str2, str1, len+1);
    return (str2);

}

#include <assert.h>
#include <stdlib.h>
#include<stdio.h>

 
int main(void)
{
    const char *s1 = "String";
    char *s2 = ft_strdup(s1);
    printf("%s", s2);
    if (s2[7] == '\0')
        printf("\nyes\n");
    free(s2);
}