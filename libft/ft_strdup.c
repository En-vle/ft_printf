/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 11:32:29 by enviale           #+#    #+#             */
/*   Updated: 2026/10/26 15:45:26 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_s;
	int		i;

	i = 0;
	new_s = malloc(ft_strlen(s) + 1);
	if (!new_s)
		return (NULL);
	while (s[i])
	{
		new_s[i] = s[i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

// int main(void)
// {
// 	const char *original = "Bonjour 42";
//     char *copie;

//     copie = ft_strdup(original);
//     if (copie == NULL)
//         printf("Erreur : échec de l'allocation mémoire (malloc).\n");
//     printf("Original : %s\n", original);
//     printf("Copie    : %s\n", copie);
//     free(copie);
// }
