/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nandreev <nandreev@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:49:06 by nandreev          #+#    #+#             */
/*   Updated: 2023/12/08 21:30:35 by nandreev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	write_char(int n, int fd)
{
	char	ch;

	ch = n + '0';
	write (fd, &ch, 1);
}

void	conv_to_char(int nb, int fd)
{
	int	n;
	int	i;
	int	n2;

	n = nb;
	i = 1;
	while (n > 9)
	{
		n = n / 10;
		i = i * 10;
	}
	n = nb;
	n2 = nb;
	while (i != 1)
	{
		n = n2 / i;
		write_char(n, fd);
		n2 = n2 % i;
		i = i / 10;
	}
	write_char(n2, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n >= 0)
		conv_to_char(n, fd);
	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	if (n < 0 && n != -2147483648)
	{
		write (fd, "-", 1);
		conv_to_char(-n, fd);
	}
}

/*int main(void)
{
	ft_putnbr_fd(42, 1);
	write (1,"|", 1);
	ft_putnbr_fd(0, 1);
	write (1,"|", 1);
	ft_putnbr_fd(-42, 1);
	write (1,"|", 1);
	ft_putnbr_fd(2147483647, 1);
	write (1,"|", 1);
	ft_putnbr_fd(-2147483648, 1);
	write (1,"|", 1);
}*/