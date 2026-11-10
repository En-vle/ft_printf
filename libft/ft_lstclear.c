/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 16:22:40 by enviale           #+#    #+#             */
/*   Updated: 2026/10/28 17:02:39 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear( t_list **lst, void (*del)(void*))
{
	t_list	*begin;
	t_list	*temp;

	if (!del || !lst)
		return ;
	begin = *lst;
	while (begin)
	{
		temp = begin->next;
		ft_lstdelone(begin, del);
		begin = temp;
	}
	*lst = NULL;
}

// void del_content(void *content)
// {
//     free(content);
// }

// int main(void)
// {
//     t_list *elem1;
//     t_list *elem2;
//     t_list *elem3;
//     t_list *head;

//     // Création de quelques éléments
//     elem1 = ft_lstnew(strdup("Premier"));
//     elem2 = ft_lstnew(strdup("Deuxième"));
//     elem3 = ft_lstnew(strdup("Troisième"));

//     // Chaînage de la liste : elem1 -> elem2 -> elem3
//     head = elem1;
//     elem1->next = elem2;
//     elem2->next = elem3;

//     // Vérification que la liste n'est pas vide
//     printf("Avant ft_lstclear, head = %p\n", (void *)head);

//     // Appel de ft_lstclear pour supprimer tous les nœuds et vider le contenu
//     ft_lstclear(&head, &del_content);

//     // Après ft_lstclear, head doit pointer vers NULL
//     if (head == NULL)
//         printf("Après ft_lstclear, head est bien NULL .\n");
//     else
//         printf("Erreur : head n'est pas NULL (%p).\n", (void *)head);

//     return (0);
// }