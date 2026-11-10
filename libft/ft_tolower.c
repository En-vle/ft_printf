/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 08:37:59 by enviale           #+#    #+#             */
/*   Updated: 2026/10/25 09:07:20 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (c + 32);
	else
		return (c);
}

// int main(void)
// {
//     printf("%d\n",ft_tolower('a'));
//     printf("%d\n",ft_tolower('b'));
//     printf("%d\n",ft_tolower('z'));
//     printf("%d\n",ft_tolower('Z'));
//     printf("%d\n",ft_tolower('A'));
//     printf("%d\n",ft_tolower('\0'));
//     printf("%d\n",ft_tolower('D'));
//     printf("%d\n",ft_tolower('g'));
//     printf("%d\n",ft_tolower(51));
// 	printf("%d\n",ft_tolower(127));
// }