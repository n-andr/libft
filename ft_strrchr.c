#include "libft.h"

char    *ft_strrchr (const char *s, int c)
{
    char    *s1;
    int len;

    s1 = (char *)s;
    len = ft_strlen(s1);

    while (len != 0)
    {
        if (*(s1 + len) == c)
            return(s1 + len);
        len--;
    }
    return(0);
}

#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] = "This is a sample string";

  printf ("'s' character in \"%s\"...\n",str);
  printf ("original strrchr:\n %s\n",strrchr(str,'s'));
  printf ("my ft_strrchr:\n %s\n",ft_strrchr(str,'s'));
  printf ("'m' character in \"%s\"...\n",str);
  printf ("original strrchr:\n %s\n",strrchr(str,'w'));
  printf ("my ft_strrchr:\n %s\n",ft_strrchr(str,'w'));
  return 0;
}