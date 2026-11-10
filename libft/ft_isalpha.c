/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:40:39 by enviale           #+#    #+#             */
/*   Updated: 2026/10/28 16:11:03 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
}

// int main(void)
// {
//     printf("%d\n",ft_isalpha('1'));
//     printf("%d\n",ft_isalpha('a'));
//     printf("%d\n",ft_isalpha('z'));
//     printf("%d\n",ft_isalpha('A'));
//     printf("%d\n",ft_isalpha('0'));
//     printf("%d\n",ft_isalpha('\0'));
//     printf("%d\n",ft_isalpha('Z'));
//     printf("%d\n",ft_isalpha('d'));
//     printf("%d\n",ft_isalpha('J'));
// }
