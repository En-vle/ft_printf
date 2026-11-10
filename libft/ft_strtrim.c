/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 14:06:30 by enviale           #+#    #+#             */
/*   Updated: 2026/10/28 16:53:15 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*res;

	i = 0;
	j = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr (set, s1[i]))
		i++;
	while (j > i && ft_strchr (set, s1[j - 1]))
		j--;
	res = ft_substr (s1, i, j - i);
	return (res);
}

// int main(void)
// {
//     char const *str1 = "   \t  \n Hello World!  \t \n  ";
//     char const *set_ = " \t\n";
// 	char *output = ft_strtrim(str1,set_);
// 	if(!output)
// 		printf("Erreur : échec de l'allocation mémoire (malloc).\n");
// 	printf("%s\n",output);
// 	return (0);
// }
