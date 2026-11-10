/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 11:53:33 by enviale           #+#    #+#             */
/*   Updated: 2026/10/30 15:49:56 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*new_s;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
	{
		new_s = malloc(1);
		if (new_s)
			*new_s = '\0';
		return (new_s);
	}
	if (s_len < start + len || SIZE_MAX == len)
		len = s_len - start;
	new_s = malloc(len + 1);
	if (!new_s)
		return (NULL);
	ft_strlcpy(new_s, s + start, len + 1);
	new_s[len] = '\0';
	return (new_s);
}

// int main(void)
// {
// 	char const *str ="test";
// 	char *copie;

//     copie = ft_substr(str,12,6);
//     if (copie == NULL)
// 		return (0);
// 	printf("%s\n",str);
// 	printf("%s\n",copie);
// }
