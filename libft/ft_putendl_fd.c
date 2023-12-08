#include "libft.h"
#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
     while (*s != '\0')
	{
		write(fd, s, 1);
		s ++;
	}
    write(fd, "\n", 1);
}

/*int main() {
    char	*str;

	str = "fhjkhfhf\n000";
    int filedescriptor = 1; 

    ft_putendl_fd(str, filedescriptor);

    return 0;
}*/