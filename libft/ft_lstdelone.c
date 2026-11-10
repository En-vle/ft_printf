/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:14:01 by enviale           #+#    #+#             */
/*   Updated: 2026/10/27 16:06:45 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	(del)(lst->content);
	free(lst);
}

// void	del_content(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	t_list	*element;
// 	char	*str;

// 	// 1. Allocation dynamique du contenu
// 	str = malloc(13 * sizeof(char));
// 	if (!str)
// 		return (1);
// 	// Remplissage du contenu
// 	for (int i = 0; "Hello World!"[i]; i++)
// 		str[i] = "Hello World!"[i];
// 	str[12] = '\0';

// 	// 2. Création d'un maillon de liste (t_list) avec ft_lstnew
// 	element = ft_lstnew(str);
// 	if (!element)
// 	{
// 		free(str);
// 		return (1);
// 	}

// 	// Affichage avant suppression pour vérifier que tout fonctionne
// 	printf("Avant lstdelone (adresse du maillon) : %p\n", (void *)element);
// 	printf("Contenu du maillon : %s\n", (char *)element->content);

// 	// 3. Appel de ft_lstdelone
// 	// Libère le contenu via 'del_content' ET libère le maillon lui-même
// 	ft_lstdelone(element, &del_content);

// 	printf("\nLe maillon et son contenu ont été libérés avec succès.\n");
// 	return (0);
// }