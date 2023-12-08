/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandreev <nandreev@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:47:55 by nandreev          #+#    #+#             */
/*   Updated: 2023/12/06 15:50:36 by nandreev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n_items, size_t size)
{
	size_t	total_size;
	char	*mem;
	size_t	i;

	total_size = n_items * size;
	mem = malloc(total_size * sizeof(char));
	if (mem == 0 || size == 0 || SIZE_MAX / n_items < size)
		return (NULL);
	i = 0;
	while (i < total_size)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}

/*#include <stdio.h>
#include <stdlib.h>

int main () {
   int i, n;
   int *a;

   printf("Number of elements to be entered:");
   scanf("%d",&n);

   a = (int*)ft_calloc(n, sizeof(int));
   printf("Enter %d numbers:\n",n);
   for( i=0 ; i < n ; i++ ) {
	  scanf("%d",&a[i]);
   }

   printf("The numbers entered are: ");
   for( i=0 ; i < n ; i++ ) {
	  printf("%d ",a[i]);
   }
   free( a );
   
   return(0);
}*/