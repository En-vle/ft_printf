/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:09:04 by enviale           #+#    #+#             */
/*   Updated: 2026/11/17 11:26:49 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	which_function(const char *base, va_list ap)
{
	int	len;

	len = 0;
	if (*base == 'c')
		len = ft_print_char(va_arg(ap, int));
	else if (*base == 's')
		len = ft_print_str(va_arg(ap, char *));
	else if (*base == '%')
		len = ft_print_char('%');
	else if (*base == 'i' || *base == 'd')
		len = ft_print_numb(va_arg(ap, int));
	else if (*base == 'u')
		len = ft_print_dec_numb(va_arg(ap, unsigned int));
	else if (*base == 'x')
		len = ft_print_numb_hexa(va_arg(ap, unsigned int));
	else if (*base == 'X')
		len = ft_print_numb_upper_hexa(va_arg(ap, unsigned int));
	else if (*base == 'p')
		len = ft_print_adress(va_arg(ap, void *));
	return (len);
}

int	ft_printf(const char *base, ...)
{
	int		count;
	int		tmp;
	va_list	ap;

	count = 0;
	if (!base)
		return (-1);
	va_start(ap, base);
	while (*base)
	{
		if (*base == '%' && *(base + 1) != '\0')
		{
			base++;
			tmp = which_function(base, ap);
		}
		else
			tmp = write(1, base, 1);
		if (tmp < 0)
			return (-1);
		count += tmp;
		base++;
	}
	va_end(ap);
	return (count);
}

