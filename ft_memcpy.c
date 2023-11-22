#include <stddef.h>
#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
	{
		*(char*)(dest + i) = *(char*)(src + i);
		i++;
	}
	return (dest);
}
/* do i need if-statment? 
if (dest == NULL || src == NULL)
    {
        return NULL;
    }
*/
/*#include <stdio.h>
int main()
{
    char source[] = "Hello, World!";
    char destination[20];

    // Using ft_memcpy to copy from source to destination
    ft_memcpy(destination, source, sizeof(source));

    // Print the content of the destination array
    printf("Copied String: %s\n", destination);

    return 0;
}*/