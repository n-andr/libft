#include "libft.h"

char    *ft_strchr (const char *s, int c)
{
    char    *s1;

    s1 = (char *)s;
    while (*s1 != '\0' || *s1 != c)
    {
        s1++;
    }
    return(s1);
}

#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] = "This is a sample string";

  printf ("Looking for the 's' character in \"%s\"...\n",str);
  printf ("found at %s\n",strchr(str,'s'));
  printf ("found at %s\n",ft_strchr(str,'s'));
  return 0;
}