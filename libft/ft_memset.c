/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 13:37:41 by enviale           #+#    #+#             */
/*   Updated: 2026/10/25 09:27:50 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		p[i] = c;
		i++;
	}
	return (b);
}

// int	main(void)
// {
// 	char	v[10]; 
// 	printf(" FT : %p\n", ft_memset(v, 21, 5));
// 	printf("Vrai: %p\n", memset(v, 21, 5));

// }
