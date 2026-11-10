/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 13:47:05 by enviale           #+#    #+#             */
/*   Updated: 2026/10/26 14:35:21 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*tmpo;

	tmpo = malloc (sizeof(t_list));
	if (!tmpo)
		return (NULL);
	tmpo->content = content;
	tmpo->next = NULL;
	return (tmpo);
}

// int main(void)
// {
//     char *str = "Hello";
//     t_list *node1 = ft_lstnew(str);
//     if (!node1)
//     {
//         printf("Erreur d'allocation pour node1\n");
//         return (1);
//     }
//     printf("%s | %p\n", (char *)node1->content, (void *)node1->next);
//     int value = 42;
//     t_list *node2 = ft_lstnew(&value);
//     if (!node2)
//     {
//         free(node1);
//         printf("Erreur d'allocation pour node2\n");
//         return (1);
//     }
//     printf("%d | %p\n", *(int *)node2->content, (void *)node2->next);
//     free(node1);
//     free(node2);
// }