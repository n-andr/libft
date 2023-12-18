/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandreev <nandreev@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:49:06 by nandreev          #+#    #+#             */
/*   Updated: 2023/12/08 21:41:25 by nandreev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
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