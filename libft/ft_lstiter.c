/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 16:52:34 by enviale           #+#    #+#             */
/*   Updated: 2026/10/28 17:01:03 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	tmp = lst;
	if (!lst || !f)
		return ;
	while (tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}

// static void	print_content(void *content)
// {
// 	if (content)
// 		printf("Node content: %s\n", (char *)content);
// }
// static void	uppercase_content(void *content)
// {
// 	char *str = (char *)content;
// 	if (!str)
// 		return ;
// 	while (*str)
// 	{
// 		if (*str >= 'a' && *str <= 'z')
// 			*str -= 32;
// 		str++;
// 	}
// }

// int	main(void)
// {
// 	// 1. Création de chaînes allouées dynamiquement 
// 	char *str1 = strdup("hello");
// 	char *str2 = strdup("world");
// 	char *str3 = strdup("42");

// 	// 2. Initialisation des nodes
// 	t_list *elem1 = ft_lstnew(str1);
// 	t_list *elem2 = ft_lstnew(str2);
// 	t_list *elem3 = ft_lstnew(str3);

// 	// 3. Liaison des nodes pour former la liste
// 	elem1->next = elem2;
// 	elem2->next = elem3;

// 	printf("--- Affichage initial avec ft_lstiter ---\n");
// 	ft_lstiter(elem1, print_content);

// 	printf("\n--- Modification (Majuscules) avec ft_lstiter ---\n");
// 	ft_lstiter(elem1, uppercase_content);

// 	printf("\n--- Affichage après modification ---\n");
// 	ft_lstiter(elem1, print_content);

// 	// 4. Nettoyage de la mémoire
// 	free(str1);
// 	free(str2);
// 	free(str3);
// 	free(elem1);
// 	free(elem2);
// 	free(elem3);
// }