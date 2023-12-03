#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t len_l;

    if (little[0] == '\0')
        return((char *)big);
    len_l = ft_strlen((char *)little);
    while ((len >= len_l) && (*big != '\0'))
    {
       
        if (*big == *little && (ft_strncmp(big, little, len_l) == 0))
			return ((char *)big);
        
        big++;
		len--;
    }
    return (NULL);
    
}

/*#include <stdio.h>
#include <string.h>
int main ()
{
    const char	*largestring = "Food Bar B12";
    const char	*smallstring = "Barasdfghjk";
    int n;

    n = 250000;

	printf("original:%s\n",strnstr(largestring,	smallstring, n));
    printf("my_ft:%s\n",ft_strnstr(largestring,	smallstring, n));

}*/