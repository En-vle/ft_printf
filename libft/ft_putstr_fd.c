/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 12:46:58 by enviale           #+#    #+#             */
/*   Updated: 2026/10/27 16:06:04 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	write (fd, s, ft_strlen(s));
}

// int main(void)
// {
	// int fd;
	// fd = open("ft_putstr_fd.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	// ft_putstr_fd("bonjour",fd);
	// close(fd);
// 	unlink("ft_putstr_fd.txt");
// }