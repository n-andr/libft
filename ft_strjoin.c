#include "libft.h"


char *ft_strjoin(char const *s1, char const *s2)
{
    char *s_join;
    size_t  total_len;

    total_len = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
    s_join = malloc (total_len * sizeof(char));
    if (total_len == 0 || s_join == 0)
        return (NULL);
    ft_strlcpy(s_join, s1, ft_strlen((char *)s1) +1);
    ft_strlcpy(s_join + ft_strlen((char *)s1), s2, ft_strlen((char *)s2) + 1);
    return (s_join);
}

/*#include <stdio.h>

int main() {
    const char *str1 = "Hello";
    const char *str2 = "";
    char *result = ft_strjoin(str1, str2);

    if (result != NULL) {
        printf("Joined String: %s\n", result);
        free(result);
    } else {
        printf("Memory allocation failed\n");
    }
    return 0;
}*/