/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandreev <nandreev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:49:38 by nandreev          #+#    #+#             */
/*   Updated: 2023/11/29 17:49:39 by nandreev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s1;
	int		len;
	char	ch;

	s1 = (char *)s;
	ch = (char)c;
	len = ft_strlen(s1);
	while (len >= 0)
	{
		if (*(s1 + len) == ch)
			return (s1 + len);
		len--;
	}
	return (NULL);
}

/*#include <stdio.h>
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
}*/