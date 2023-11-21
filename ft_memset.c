#include "libft.h"
#include <stddef.h>

void *ft_memset(void *ptr, int value, size_t num)
{
    unsigned char *byte_ptr;

    byte_ptr = (unsigned char *)ptr;
    size_t i = 0;
    while (i < num) 
    {
        byte_ptr[i] = (unsigned char)value;
        i++;
    }
    return ptr;
}
/*#include <stdio.h>

int main() {
    char buffer[10] = "help";

    // Using your custom memset function
    ft_memset(buffer, 'A', 3);

    // Print the contents of the buffer
    printf("Buffer after ft_memset: %s\n", buffer);

    return 0;
}*/