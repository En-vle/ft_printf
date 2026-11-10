/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 16:26:10 by enviale           #+#    #+#             */
/*   Updated: 2026/10/28 16:23:43 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lensrc;

	i = 0;
	lensrc = ft_strlen(src);
	if (size == 0)
		return (lensrc);
	while (src[i] && (i + 1 < size))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (lensrc);
}

// int main(void)
// {
// 	char	dest[20] = "hello ";
// 	char	srce[] = "world ! ";

// 		printf ("%zu\n",ft_strlcpy (dest, srce, sizeof(dest)));
// 		printf ("%s\n",dest);
// }
