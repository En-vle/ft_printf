/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:15:33 by enviale           #+#    #+#             */
/*   Updated: 2026/10/28 17:06:10 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// static void	my_iter_func(unsigned int i, char *c)
// {
// 	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
// 	{
// 		*c = *c - 32;
// 	}
// }

// static void	my_print_func(unsigned int i, char *c)
// {
// 	printf("Index %u : %c\n", i, *c);
// }

// int	main(void)
// {
// 	char str[] = "hello world";

// 	printf("--- Chaîne d'origine ---\n");
// 	printf("%s\n\n", str);
// 	ft_striteri(str, &my_iter_func); 
// 	printf("--- Après ft_striteri (Modif index pairs) ---\n");
// 	printf("%s\n\n", str);
// 	printf("--- Parcours avec affichage des index ---\n");
// 	ft_striteri(str, &my_print_func);

// }