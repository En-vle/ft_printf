/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:30:07 by enviale           #+#    #+#             */
/*   Updated: 2026/10/28 17:05:29 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		i;

	tmp = lst;
	i = 0;
	if (!lst)
		return (0);
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

// int main(void)
// {
//     // 1. Création des nœuds de la liste
//     t_list *elem1 = malloc(sizeof(t_list));
//     t_list *elem2 = malloc(sizeof(t_list));
//     t_list *elem3 = malloc(sizeof(t_list));

//     // Vérification des allocations
//     if (!elem1 || !elem2 || !elem3)
//     {
//         return (1);
//     }

//     // 2. Initialisation des contenus et chaînage
//     elem1->content = "Premier";
//     elem1->next = elem2;

//     elem2->content = "Deuxième";
//     elem2->next = elem3;

//     elem3->content = "Troisième";
//     elem3->next = NULL; // Fin de la liste

//     // 3. Test de la fonction sur une liste pleine
//     int total_elements = ft_lstsize(elem1);
//     printf("Taille de la liste (attendue: 3) : %d\n", total_elements);

//     // 4. Test avec une liste vide (NULL)
//     printf("pointeur NULL (attendue: 0) : %d\n", ft_lstsize(NULL));

//     // 5. Libération de la mémoire
//     free(elem1);
//     free(elem2);
//     free(elem3);
// }