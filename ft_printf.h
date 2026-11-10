/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:12:54 by enviale           #+#    #+#             */
/*   Updated: 2026/11/05 16:34:04 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *base, ...);
int		ft_print_char(char c);
int		ft_print_str(char *s);
int		ft_print_numb(int n);
int		ft_print_dec_numb(unsigned int n);
char	*ft_uitoa(unsigned int n);
char	*ft_ulitoa16(unsigned long int n);
int		ft_print_numb_hexa(unsigned int n);
int		ft_print_numb_upper_hexa(unsigned int n);
int		ft_print_adress(void *n);

#endif 