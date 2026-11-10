/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 08:41:40 by enviale           #+#    #+#             */
/*   Updated: 2026/11/03 11:45:51 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr( const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (s[i] != (char)c && i != 0)
		i--;
	if (s[i] == (char)c)
		return ((char *) &s[i]);
	return (0);
}

// int main(void)
// {
// 	printf("FT : %s\n",ft_strrchr("Bonjour jne m",'n'));
// 	printf("VRAI : %s\n",strrchr("Bonjour jne m",'n'));
// 	printf("FT : %s\n",ft_strrchr("aaaab",'b'));
// 	printf("VRAI : %s\n",strrchr("aaaab",'b'));
// 	printf("FT : %s\n",ft_strrchr("drrd",'d'));
// 	printf("VRAI : %s\n",strrchr("drrd",'d'));
// 	printf("FT : %s\n",ft_strrchr("rgrgr",'a'));
// 	printf("VRAI : %s\n",strrchr("rgrgr",'a'));
// }
