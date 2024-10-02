/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crea <crea@student.42roma.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:59:10 by crea              #+#    #+#             */
/*   Updated: 2024/02/05 14:42:07 by crea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_memset:
**	Fills the first 'n' bytes of the memory area pointed to by 'arr' with the byte value 'c'.
**	Returns a pointer to the memory area 'arr'.
*/
void	*ft_memset(void *arr, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)arr;
	while (n-- > 0)
		*ptr++ = (unsigned char)c;
	return (arr);
}
