/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:38:59 by enviale           #+#    #+#             */
/*   Updated: 2026/10/27 16:14:51 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

// int main(void)
// {
// 	int fd;
// 	fd = open("fd_putchar.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	ft_putchar_fd('a',fd);
// 	ft_putchar_fd('a',fd);
// 	close(fd);
// 	// unlink("fd_putchar.txt");
// }