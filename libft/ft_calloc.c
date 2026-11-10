/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 10:49:14 by enviale           #+#    #+#             */
/*   Updated: 2026/10/28 15:31:19 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tmpo;
	size_t			i;

	i = 0;
	if (size && nmemb > SIZE_MAX / size)
		return (NULL);
	tmpo = malloc(nmemb * size);
	if (tmpo == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		tmpo[i] = 0;
		i++;
	}
	return (tmpo);
}

// int main(void) {
//     int n = 5;
//     int *arr = (int *)calloc(n, sizeof(int));

//     if (arr == NULL) 
//         printf("Erreur d'allocation de mémoire !\n");
//     for (int i = 0; i < n; i++) 
//         printf("%d ", arr[i]);
//     free(arr);
//     arr = NULL;
//     return 0;
// }
