/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 12:28:29 by enviale           #+#    #+#             */
/*   Updated: 2026/10/28 16:50:06 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;

	if (!s1 || !s2)
		return (NULL);
	new_s = malloc ((ft_strlen (s1) + ft_strlen (s2) + 1) * sizeof (char));
	if (!new_s)
		return (NULL);
	new_s[0] = '\0';
	ft_strlcat(new_s, s1, ft_strlen (s1) + ft_strlen (s2) + 1);
	ft_strlcat(new_s, s2, ft_strlen (s1) + ft_strlen (s2) + 1);
	return (new_s);
}

// int main(void)
// {
// 	char const *str1 = "Hello ";
// 	char const *str2 = "World ! ";
// 	char *output = ft_strjoin(str1,str2);
// 	if(!output)
// 		printf("Erreur : échec de l'allocation mémoire (malloc).\n");
// 	printf("%s\n", output);
// }