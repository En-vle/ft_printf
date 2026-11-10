/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 17:17:42 by enviale           #+#    #+#             */
/*   Updated: 2026/10/25 09:07:20 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c <= 'z' && c >= 'a')
		return (c - 32);
	else
		return (c);
}

// int main(void)
// {
//     printf("%d\n",ft_toupper('a'));
//     printf("%d\n",ft_toupper('b'));
//     printf("%d\n",ft_toupper('z'));
//     printf("%d\n",ft_toupper('Z'));
//     printf("%d\n",ft_toupper('A'));
//     printf("%d\n",ft_toupper('\0'));
//     printf("%d\n",ft_toupper('D'));
//     printf("%d\n",ft_toupper('g'));
//     printf("%d\n",ft_toupper(51));
// 	printf("%d\n",ft_toupper(127));
// }