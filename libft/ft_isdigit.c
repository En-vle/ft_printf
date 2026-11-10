/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 14:16:55 by enviale           #+#    #+#             */
/*   Updated: 2026/10/28 16:13:51 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}

// int main(void)
// {
//     printf("%d\n",ft_isdigit('1'));
//     printf("%d\n",ft_isdigit('2'));
//     printf("%d\n",ft_isdigit('5'));
//     printf("%d\n",ft_isdigit('9'));
//     printf("%d\n",ft_isdigit('0'));
//     printf("%d\n",ft_isdigit('\0'));
//     printf("%d\n",ft_isdigit('Z'));
//     printf("%d\n",ft_isdigit('d'));
//     printf("%d\n",ft_isdigit(51));
// }
