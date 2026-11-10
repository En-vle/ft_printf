/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 08:41:40 by enviale           #+#    #+#             */
/*   Updated: 2026/10/26 15:59:40 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr( const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return ((char *) &s[i]);
	return (NULL);
}

// int main(void)
// {
// 	printf("FT : %s\n",ft_strchr("Bonjour je m",'n'));
// 	printf("VRAI : %s\n",strchr("Bonjour je m",'n'));
// 	printf("FT : %s\n",ft_strchr("aaaab",'b'));
// 	printf("VRAI : %s\n",strchr("aaaab",'b'));
// 	printf("FT : %s\n",ft_strchr("drr",'d'));
// 	printf("VRAI : %s\n",strchr("drr",'d'));
// 	printf("FT : %s\n",ft_strchr("rgr",'g'));
// 	printf("VRAI : %s\n",strchr("rgr",'g'));
// }
