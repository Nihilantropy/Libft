/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crea <crea@student.42roma.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:00:42 by crea              #+#    #+#             */
/*   Updated: 2024/02/05 14:43:16 by crea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_strdup:
**	Creates a duplicate of the string 'str'.
**	Allocates memory for the duplicate string including the null terminator,
**	copies the content of 'str' into the newly allocated memory, and returns a pointer
**	to the duplicated string.
**	Returns NULL if memory allocation fails.
*/
char	*ft_strdup(const char *str)
{
	size_t	dup_sz;
	char	*dup_str;

	dup_sz = ft_strlen(str) + 1;
	dup_str = (char *)malloc(dup_sz);
	if (!dup_str)
		return (0);
	ft_memcpy(dup_str, str, dup_sz);
	return (dup_str);
}
