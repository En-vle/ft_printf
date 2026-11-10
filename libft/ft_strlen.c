/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:43:08 by enviale           #+#    #+#             */
/*   Updated: 2026/10/25 09:07:20 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// int main(void)
// {
// 	printf("La longueur de la chaine est : %zu\n",ft_strlen("14w5yyq 3ofjwi"));
// 	printf("La longueur de la chaine est : %zu\n",ft_strlen("			"));
// 	printf("La longueur de la chaine est : %zu\n",ft_strlen("    "));
// 	printf("La longueur de la chaine est : %zu\n",ft_strlen("eetWFQ"));
// }
