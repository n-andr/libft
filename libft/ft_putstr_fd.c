/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandreev <nandreev@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:49:06 by nandreev          #+#    #+#             */
/*   Updated: 2023/12/08 21:30:35 by nandreev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
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