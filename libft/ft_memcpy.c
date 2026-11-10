/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:00:49 by enviale           #+#    #+#             */
/*   Updated: 2026/10/26 15:25:41 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (!s && !d)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// int main(void)
// {
// 	char	v[] = "bonjour";
// 	char	x[15];

// 	printf(" AVANT : %s\n",x);
// 	printf(" FT : %s\n",x);
// 	printf(" VRAI: %s\n",x);
// 	ft_memcpy(x, v, 10);
// 	printf(" APRES : \n");
// 	printf(" FT : %s\n",x);
// 	memcpy(x, v, 10);
// 	printf(" VRAI: %s\n",x);
// }
