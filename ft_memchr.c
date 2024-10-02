/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crea <crea@student.42roma.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:56:27 by crea              #+#    #+#             */
/*   Updated: 2024/02/05 14:46:05 by crea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_memchr:
**	Searches for the first occurrence of the byte 'c' in the first 'sz' bytes 
**	of the memory area pointed to by 's'. Returns a pointer to the matching 
**	byte or NULL if 'c' is not found.
*/
void	*ft_memchr(const void *s, int c, size_t sz)
{
	size_t	i;

	i = 0;
	while (i < sz)
	{
		if (((unsigned char *)s)[i] == (const unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
