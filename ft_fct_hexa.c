/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fct_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 14:37:59 by enviale           #+#    #+#             */
/*   Updated: 2026/11/06 13:23:11 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_unsigned_size2(unsigned int n)
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

static char	*ft_uitoa16(unsigned int n)
{
	int				len;
	long			nb;
	char			*res;
	char			*base;

	base = "0123456789abcdef";
	len = count_unsigned_size2(n);
	nb = n;
	res = malloc (sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	while (len > 0)
	{
		res[--len] = *(nb % 16 + base);
		nb /= 16;
	}
	return (res);
}

static char	*ft_upper_uitoa16(unsigned int n)
{
	int				len;
	long			nb;
	char			*res;
	char			*base;

	base = "0123456789ABCDEF";
	len = count_unsigned_size2(n);
	nb = n;
	res = malloc (sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	while (len > 0)
	{
		res[--len] = *(nb % 16 + base);
		nb /= 16;
	}
	return (res);
}

int	ft_print_numb_hexa(unsigned int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_uitoa16(n);
	if (!num)
		return (-1);
	len = ft_print_str(num);
	free(num);
	return (len);
}

int	ft_print_numb_upper_hexa(unsigned int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_upper_uitoa16(n);
	if (!num)
		return (-1);
	len = ft_print_str(num);
	free(num);
	return (len);
}
