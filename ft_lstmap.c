/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crea <crea@student.42roma.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:14:59 by crea              #+#    #+#             */
/*   Updated: 2024/02/05 15:31:16 by crea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_lstmap:
**	Creates a new list by applying the function 'f' to each element of the 
**	list pointed to by 'lst'. If any memory allocation fails, the function 
**	clears the newly created list using 'del' and returns NULL. Otherwise, 
**	it returns the new list.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*new;
	t_list		*head;
	t_list		*tail;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	new = ft_lstnew(f(lst->content));
	ft_lstadd_back(&head, new);
	tail = head;
	lst = lst->next;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&tail, new);
		tail = tail->next;
		lst = lst->next;
	}
	return (head);
}
