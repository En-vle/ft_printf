/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulitoa16.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 15:34:54 by enviale           #+#    #+#             */
/*   Updated: 2026/11/06 13:21:20 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_unsigned_size3(unsigned long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	while (n != 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

char	*ft_ulitoa16(unsigned long int n)
{
	int				len;
	char			*res;
	char			*base;

	base = "0123456789abcdef";
	len = count_unsigned_size3(n);
	res = malloc (sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	while (len > 0)
	{
		res[--len] = *(n % 16 + base);
		n /= 16;
	}
	return (res);
}
