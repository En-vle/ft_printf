/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:28:36 by enviale           #+#    #+#             */
/*   Updated: 2026/10/28 17:07:48 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

// int	main()
// {
// 	t_list	*head, *node_1, *node_2;

// 	head = malloc(sizeof(t_list));
// 	node_1 = malloc(sizeof(t_list));
// 	node_2 = malloc(sizeof(t_list));

// 	head->content = (void *)"hello";
// 	node_1->content = (void *)"world";
// 	node_2->content = (void *)"!";

// 	ft_lstadd_back(&head, node_1);
// 	ft_lstadd_back(&head, node_2);

// 	t_list	*current;

// 	current = head;
// 	while (current)
// 	{
// 		printf("%s\n", (char *)(current->content));
// 		current = current->next;
// 	}
// }