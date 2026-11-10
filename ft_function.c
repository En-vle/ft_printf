/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_function.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 10:42:11 by enviale           #+#    #+#             */
/*   Updated: 2026/11/06 13:22:32 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(char c)
{
	return (write(1, &c, 1));
}

int	ft_print_str(char *s)
{
	if (!s)
	{
		return (write(1, "(null)", 6));
	}
	return (write(1, s, ft_strlen(s)));
}

int	ft_print_numb(int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(n);
	if (!num)
		return (-1);
	len = ft_print_str(num);
	free(num);
	return (len);
}

int	ft_print_dec_numb(unsigned int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_uitoa(n);
	if (!num)
		return (-1);
	len = ft_print_str(num);
	free(num);
	return (len);
}

int	ft_print_adress(void *n)
{
	int		len;
	char	*num;

	len = 0;
	if (!n)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	if (n != NULL)
		len = ft_print_str("0x");
	num = ft_ulitoa16((unsigned long int)n);
	if (!num)
		return (-1);
	len += ft_print_str(num);
	free(num);
	return (len);
}
