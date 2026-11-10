/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 14:22:35 by enviale           #+#    #+#             */
/*   Updated: 2026/11/02 12:23:27 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c))
		return (1);
	if (ft_isalpha(c))
		return (1);
	else
		return (0);
}

// int main(void)
// {
//     printf("%d\n",ft_isalnum('0'));
//     printf("%d\n",ft_isalnum('9'));
//     printf("%d\n",ft_isalnum('a'));
//     printf("%d\n",ft_isalnum('z'));
//     printf("%d\n",ft_isalnum('A'));
//     printf("%d\n",ft_isalnum('Z'));
//     printf("%d\n",ft_isalnum(113));
//     printf("%d\n",ft_isalnum('\n'));
//     printf("%d\n",ft_isalnum('\0'));
// }
