#include "libft.h"
#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
    while (*s != '\0')
	{
		write(fd, s, 1);
		s ++;
	}

}

/*int main() {
    char	*str;

	str = "fhjkhfhf";
    int filedescriptor = 2; 

    ft_putstr_fd(str, filedescriptor);

    return 0;
}*/