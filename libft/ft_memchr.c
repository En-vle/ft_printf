/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:03:34 by enviale           #+#    #+#             */
/*   Updated: 2026/10/26 16:05:18 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((void *) &p[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	char	v[25] = "bonjour je mappelle"; 

// 	printf(" FT : %p\n",  ft_memchr(v, 'b', 5));
// 	printf("Vrai: %p\n",memchr(v, 'b', 5));
// }