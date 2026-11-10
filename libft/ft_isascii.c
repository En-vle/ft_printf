/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 14:42:09 by enviale           #+#    #+#             */
/*   Updated: 2026/10/28 16:13:49 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 126)
		return (1);
	else if (c == 127)
		return (1);
	else
		return (0);
}

// int main(void)
// {
//     printf("%d\n",ft_isascii('1'));
//     printf("%d\n",ft_isascii('2'));
//     printf("%d\n",ft_isascii('5'));
//     printf("%d\n",ft_isascii('9'));
//     printf("%d\n",ft_isascii('0'));
//     printf("%d\n",ft_isascii('\0'));
//     printf("%d\n",ft_isascii('Z'));
//     printf("%d\n",ft_isascii('d'));
//     printf("%d\n",ft_isascii(51));
// 	printf("%d\n",ft_isascii(127));
// }
