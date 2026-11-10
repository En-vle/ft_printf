/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 13:28:17 by enviale           #+#    #+#             */
/*   Updated: 2026/10/26 13:33:41 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <fcntl.h>

void	ft_putendl_fd(char *s, int fd)
{
	write (fd, s, ft_strlen(s));
	write (fd, "\n", 1);
}

// int main(void)
// {
// 	int fd;
// 	fd = open("ft_putendl_fd.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	ft_putendl_fd("bonjour",fd);
// 	close(fd);
// 	// unlink("ft_putendl_fd.txt");
// }