/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:35:53 by enviale           #+#    #+#             */
/*   Updated: 2026/10/28 17:03:12 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
// int main()
// {
// 	t_list *lst = malloc(sizeof(t_list));
// 	lst->content = (char *) "hello";
// 	lst->next = NULL;
// 	t_list *new = malloc(sizeof(t_list));
// 	new->content = (char *) "world";
// 	new->next = NULL;
// 	ft_lstadd_front(&lst, new);
// 	t_list *current;
// 	current = lst;
// 	while (current != NULL)
// 	{
// 		printf("%s\n", (char *)(current->content));
// 		current = current->next;
// 	}
// }
