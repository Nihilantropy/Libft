/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crea <crea@student.42roma.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:45:24 by crea              #+#    #+#             */
/*   Updated: 2024/02/12 00:44:10 by crea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_lstclear:
**	Clears the entire list pointed to by 'lst', using the function 'del'
**	to free the content of each node.
**	Iterates through the list, deletes the content of each node using 'del',
**	and frees the node itself.
**	Sets the list pointer to NULL after all nodes are cleared.
**	If 'lst' or 'del' is NULL, the function does nothing.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst|| !del)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}
