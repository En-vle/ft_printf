/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:28:43 by enviale           #+#    #+#             */
/*   Updated: 2026/10/28 16:13:07 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c <= 126 && c >= 32)
		return (1);
	else
		return (0);
}

// int main(void)
// {
//     printf("%d\n",ft_isprint(31));
//     printf("%d\n",ft_isprint(0));
//     printf("%d\n",ft_isprint(126));
//     printf("%d\n",ft_isprint(32));
//     printf("%d\n",ft_isprint(127));
//     printf("%d\n",ft_isprint('g'));
// }