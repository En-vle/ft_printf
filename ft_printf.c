/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:09:04 by enviale           #+#    #+#             */
/*   Updated: 2026/11/06 13:34:01 by enviale          ###   ########.fr       */
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
	va_end (ap);
	return (count);
}

// int main(void)
// {
// 	int nb = 42;
// 	ft_printf("\n------- FT -------\n");
// 	int res1 = ft_printf("Le caractere est : %c\n", 'a');
// 	int res2 = ft_printf("La chaine est : %s\n", "bonjour");
// 	int res3 = ft_printf("Voici un %%\n");
// 	int res4_5=ft_printf("La chaine avait %i caracteres\n1 + 1 = %d\n",7,2);
// 	int res6 = ft_printf("Voici un grand nombre : %u\n", -1);
// 	int res7 = ft_printf("42 en hexa : %x\n", 42);
// 	int res8 = ft_printf("Un grand nombre en HEXA : %X\n", -1);
// 	int res9 = ft_printf("L'adresse de 'nb' est %p\n", &nb);
// 	int restt = res1 + res2 + res3 + res4_5 + \
// 	res6 + res7 + res8 + res9;
// 	ft_printf("%d characteres ont ete ecrits\n", restt);
// 	printf("\n------ VRAI ------\n");
// 	int bis_res1 = printf("Le caractere est : %c\n", 'a');
// 	int bis_res2 = printf("La chaine est : %s\n", "bonjour");
// 	int bis_res3 = printf("Voici un %%\n");
// 	int bis_res4_5=printf("La chaine avait %i caracteres\n1 + 1 = %d\n",7,2);
// 	int bis_res6 = printf("Voici un grand nombre : %u\n", -1);
// 	int bis_res7 = printf("42 en hexa : %x\n", 42);
// 	int bis_res8 = printf("Un grand nombre en HEXA : %X\n", -1);
// 	int bis_res9 = printf("L'adresse de 'nb' est %p\n", &nb);
// 	int bis_restt = bis_res1 + bis_res2 + bis_res3 + bis_res4_5 + \
// 	bis_res6 + bis_res7 + bis_res8 + bis_res9;
// 	printf("%d characteres ont ete ecrits\n", bis_restt);
// }