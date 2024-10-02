/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crea <crea@student.42roma.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:51:45 by crea              #+#    #+#             */
/*   Updated: 2024/02/05 14:45:46 by crea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_bzero:
**	Sets the first n bytes of the memory area pointed to by arr to zero.
**	This function is typically used to zero out arrays or memory buffers.
*/
void	ft_bzero(void *arr, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)arr;
	while (n-- > 0)
		*ptr++ = 0;
}
