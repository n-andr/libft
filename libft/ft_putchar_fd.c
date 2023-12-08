#include "libft.h"
#include <unistd.h>

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

/*int main() {
    char character = 'A';
    int fileDescriptor = 2; 

    ft_putchar(character, fileDescriptor);

    return 0;
}*/