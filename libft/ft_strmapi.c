/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 10:40:47 by enviale           #+#    #+#             */
/*   Updated: 2026/10/28 16:54:54 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_s;

	i = 0;
	if (!s || !f)
		return (NULL);
	new_s = malloc((ft_strlen(s) +1) * sizeof(char));
	if (!new_s)
		return (NULL);
	while (i < ft_strlen(s))
	{
		new_s[i] = (*f)(i, s[i]);
		i++;
	}
	new_s[i] = 0;
	return (new_s);
}

// static char	f(unsigned int index, char c)
// {
// 	if (index % 2 == 0)
// 	{
// 		if (c >= 'a' && c <= 'z')
// 			return (c - 32);
// 	}
// 	else
// 	{
// 		if (c >= 'A' && c <= 'Z')
// 			return (c + 32);
// 	}
// 	return (c);
// }

// int main(void)
// {
//     char const *original = "hello world!";
//     char *result;

//     printf("Chaîne d'origine : %s\n", original);
//     result = ft_strmapi(original, f);
//     if (result != NULL)
//     {
// 		printf("Chaîne modifiée : %s\n", result);
//         free(result);
// 	} 
//     else
//         printf("Erreur d'allocation mémoire.\n");
// }