/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crea <crea@student.42roma.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:28:35 by crea              #+#    #+#             */
/*   Updated: 2024/02/12 00:31:51 by crea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_lstadd_front:
		Adds the element 'new' to the beginning of the list pointed to by 'lst'.
		If 'lst' or 'new' is NULL, the function does nothing.
		The new element 'new' becomes the first element, and its next pointer
		is set to the previous first element.
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
