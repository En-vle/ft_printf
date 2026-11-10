/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 13:34:04 by enviale           #+#    #+#             */
/*   Updated: 2026/10/27 10:33:01 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <fcntl.h>

void	ft_putnbr_fd(int n, int fd)
{
	int	digit;

	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else if (n < 0)
	{
		write (fd, "-", 1);
		n = -n;
		ft_putnbr_fd (n, fd);
	}
	else
	{
		if (n > 9)
		{
			ft_putnbr_fd (n / 10, fd);
			ft_putnbr_fd (n % 10, fd);
		}
		else
		{
			digit = n + '0';
			write (fd, &digit, 1);
		}
	}
}

// int main(void)
// {
// 	int fd;
// 	fd = open("ft_putnbr_fd.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	ft_putnbr_fd(3000000,fd);
// 	close(fd);
// 	// unlink("ft_putnbr_fd.txt");
// }