#include "libft.h"

#include <stdio.h>


char **ft_split(char const *s, char c)
{
    int     i;
    char    **result;
    char    *sdub;

    i = 0;
    while (*sdub != '\0')
    {
        if (*sdub == c)
            i++;
        sdub++;
    }

    if (i == 0)
    {
        result = malloc(2 * sizeof(char *));
        if (result == 0)
            return (NULL);
        result[0] = ft_strdup(s);
        result[1] = NULL;
        return(result);
    }

    

}

#include <stdio.h>

int main() {
    char const *input_string = "Hello,World,Split,Me";
    char delimiter = '-';

    printf("Original String: %s\n", input_string);
    printf("Delimiter: %c\n", delimiter);

    // Testing your ft_split function
    char **result = ft_split(input_string, delimiter);

    if (result) {
        printf("\nSplit Result:\n");
        while (*result) {
            printf("%s\n", *result);
            result++;
        }

        // Free the allocated memory
        char **temp = result;
        while (*temp) {
            if (temp != NULL)
                free(*temp);
            temp++;
        }
        free(result);
    } else {
        printf("\nError: Memory allocation failed or input string is empty.\n");
    }

    return 0;
}