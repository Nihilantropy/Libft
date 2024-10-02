/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crea <crea@student.42roma.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:09:12 by crea              #+#    #+#             */
/*   Updated: 2024/02/12 00:32:40 by crea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_lstadd_back:
**	Adds the element 'new' to the end of the list pointed to by 'lst'.
**	If the list is empty (i.e., '*lst' is NULL), 'new' becomes the first element.
**	Otherwise, it traverses the list to find the last element and appends 'new' to it.
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}
