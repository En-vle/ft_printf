/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:43:16 by enviale           #+#    #+#             */
/*   Updated: 2026/10/26 15:26:15 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (!s && !d)
		return (0);
	if (dest < src)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	return (dest);
}

// int main(void)
// {
// 	char	v[] = "bonjour";
// 	char	x[15];

// 	printf(" AVANT : %s\n",x);
// 	printf(" FT : %s\n",x);
// 	printf(" VRAI: %s\n\n",x);
// 	ft_memmove(x, v, 15);
// 	printf(" APRES : \n");
// 	printf(" FT : %s\n",x);
// 	memmove(x, v, 15);
// 	printf(" VRAI: %s\n",x);
// }
