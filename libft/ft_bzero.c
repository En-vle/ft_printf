/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 14:34:52 by enviale           #+#    #+#             */
/*   Updated: 2026/10/25 09:29:17 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

// int main(void)
// {
//     char buffer[10] = "123456789";
//     int i = 0;

//     printf("Before ft_bzero: ");
//     while (i < 9)
//     {
//         printf("%d ", buffer[i]);
//         i++;
//     }
//     printf("\n");

//     ft_bzero(buffer, 6);

//     i = 0;
//     printf("After ft_bzero:  ");
//     while (i < 9)
//     {
//         printf("%d ", buffer[i]);
//         i++;
//     }
//     printf("\n");

// }