/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:59:36 by enviale           #+#    #+#             */
/*   Updated: 2026/10/25 10:22:45 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

// int main(void)
// {
// 	printf("VRAI ATOI : %d\n",atoi("efgwgu-0"));
// 	printf("VRAI ATOI : %d\n",atoi(" 	  --20"));
// 	printf("VRAI ATOI : %d\n",atoi("10aaa"));
// 	printf("VRAI ATOI : %d\n",atoi("\0"));
// 	printf("FT ATOI : %d\n",ft_atoi("efgwgu-0"));
// 	printf("FT ATOI : %d\n",ft_atoi(" 	  --20"));
// 	printf("FT ATOI : %d\n",ft_atoi("10aaa"));
// 	printf("Ft ATOI : %d\n",ft_atoi("\0"));
// }