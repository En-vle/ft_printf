/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:58:32 by enviale           #+#    #+#             */
/*   Updated: 2026/10/27 14:46:41 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

// t_list	*new_element(void *content)
// {
// 	t_list	*elem = malloc(sizeof(t_list));
// 	if (!elem)
// 		return (NULL);
// 	elem->content = content;
// 	elem->next = NULL;
// 	return (elem);
// }
// int	main(void)
// { la liste
// 	t_list	*elem1 = new_element("Premier");
// 	t_list	*elem2 = new_element("Deuxième");
// 	t_list	*elem3 = new_element("Dernier (Cible)");
// 	elem1->next = elem2;
// 	elem2->next = elem3;
// 	t_list	*last = ft_lstlast(elem1);
// 	if (last)
// 		printf("Dernier élément trouvé : %s\n", (char *)last->content);
// 	else
// 		printf("La fonction a renvoyé NULL (Erreur).\n");
// 	t_list	*empty_test = ft_lstlast(NULL);
// 	if (empty_test == NULL)
// 		printf("Test liste vide : Réussi (renvoie bien NULL).\n");
// 	else
// 		printf("Test liste vide : Échoué.\n");
// 	free(elem1);
// 	free(elem2);
// 	free(elem3);

// 	return (0);
// }