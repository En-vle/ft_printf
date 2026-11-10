/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enviale <enviale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 09:55:08 by enviale           #+#    #+#             */
/*   Updated: 2026/10/28 17:31:18 by enviale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	t_list	*temp;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	temp = lst;
	while (temp)
	{
		new_content = f(temp->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		temp = temp->next;
	}
	return (new_list);
}

// void	*upper_and_dup(void *content)
// {
// 	char	*str;
// 	char	*new_str;
// 	int		i;

// 	if (!content)
// 		return (NULL);
// 	str = (char *)content;
// 	new_str = strdup(str);
// 	if (!new_str)
// 		return (NULL);
// 	i = 0;
// 	while (new_str[i])
// 	{
// 		if (new_str[i] >= 'a' && new_str[i] <= 'z')
// 			new_str[i] -= 32;
// 		i++;
// 	}
// 	return ((void *)new_str);
// }

// void	del_content(void *content)
// {
// 	free(content);
// }

// void	print_list(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("[%s] -> ", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	printf("NULL\n");
// }

// int	main(void)
// {
// 	t_list	*elem1 = ft_lstnew(strdup("un"));
// 	t_list	*elem2 = ft_lstnew(strdup("deux"));
// 	t_list	*elem3 = ft_lstnew(strdup("trois"));

// 	elem1->next = elem2;
// 	elem2->next = elem3;
// 	printf("Liste d'origine :\n");
// 	print_list(elem1);
// 	t_list *mapped_list = ft_lstmap(elem1, upper_and_dup, del_content);

// 	printf("\nNouvelle liste (mappée) :\n");
// 	if (mapped_list)
// 		print_list(mapped_list);
// 	else
// 		printf("Erreur d'allocation ou liste vide.\n");
// 	ft_lstclear(&elem1, del_content);
// 	ft_lstclear(&mapped_list, del_content);;
// }