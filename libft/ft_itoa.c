/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 15:37:22 by enviale           #+#    #+#             */
/*   Updated: 2026/10/28 18:27:12 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_size(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				len;
	long			nb;
	char			*res;

	len = count_size (n);
	nb = n;
	res = malloc (sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (n < 0)
		nb *= -1;
	while (len > 0)
	{
		res[--len] = nb % 10 + '0';
		nb /= 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}

// int main(void)
// {
// 	printf("%s\n",ft_itoa(30));
// 	printf("%s\n",ft_itoa(-340));
// 	printf("%s\n",ft_itoa(-2147483648));
// 	printf("%s\n",ft_itoa(0));
// 	printf("%s\n",ft_itoa(-0));
// 	printf("%s\n",ft_itoa(9));
// }