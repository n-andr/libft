#include "libft.h"

char    *ft_strchr (const char *s, int c)
{
    char    *s1;

    s1 = (char *)s;
    while (*s1 != '\0')
    {
        if (*s1 == c)
            return(s1);
        s1++;
    }
    return(0);
}

/*#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] = "This is a sample string";

  printf ("Looking for the 's' character in \"%s\"...\n",str);
  printf ("original strchr %s\n",strchr(str,'s'));
  printf ("my ft_strchr %s\n",ft_strchr(str,'s'));
  printf ("Looking for the 'm' character in \"%s\"...\n",str);
  printf ("original strchr %s\n",strchr(str,'w'));
  printf ("my ft_strchr %s\n",ft_strchr(str,'w'));
  return 0;
}*/