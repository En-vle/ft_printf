/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:33:21 by enviale           #+#    #+#             */
/*   Updated: 2026/10/30 14:53:54 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	lendst;
	size_t	lensrc;

	lensrc = ft_strlen(src);
	lendst = 0;
	while (lendst < size && dst[lendst])
		lendst++;
	if (size == lendst)
		return (size + lensrc);
	i = lendst;
	j = 0;
	while (src[j] && (i + 1 < size))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (lendst + lensrc);
}

// int	main(void)
// {
// 	char	dest[20] = "hello ";
// 	char	srce[] = "world";

// 		printf ("%zu\n",ft_strlcat (dest, srce, sizeof(dest)));
// 		printf ("%s\n",dest);
// }
