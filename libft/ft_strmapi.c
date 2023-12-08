#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    int len;
    char *s2;

    i = 0;
    len = ft_strlen((char*)s);
    s2 = malloc (sizeof(char) * (len + 1));
    if (s2 == 0)
        return (NULL);
    while (s[i] != '\0')
    {
        s2[i] = f(i, s[i]);
        i++;
    }
    s2[i] = '\0';
    return(s2);
}

/*#include <stdio.h>

char capitalise(unsigned int i, char c)
{
    return (c = c + 'A' - 'a');
}

int main(void)
{
    char str[] = "qwerty";
    char *s2;

    s2 = ft_strmapi(str, capitalise);
    printf("%s\n",str);
    printf("%s\n",s2);
}*/