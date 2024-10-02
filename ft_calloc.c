/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crea <crea@student.42roma.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:53:28 by crea              #+#    #+#             */
/*   Updated: 2024/02/05 14:40:03 by crea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_calloc:
**	Allocates memory for an array of 'count' elements of 'size' bytes each, 
**	initializes all bytes to 0, and returns a pointer to the allocated memory.
*/
void	*ft_calloc(size_t count, size_t size)
{
	size_t	tot_size;
	void	*dest;

	tot_size = count * size;
	if (count && size && (4294967295U / size <= count))
		return (NULL);
	dest = malloc(tot_size);
	if (!dest)
		return (NULL);
	ft_bzero(dest, (tot_size));
	return (dest);
}
