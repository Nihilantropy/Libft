/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crea <crea@student.42roma.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:01:52 by crea              #+#    #+#             */
/*   Updated: 2024/02/05 14:43:16 by crea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_strlcat:
		Appends the null-terminated string 'src' to the end of 'dest', up to 'sz' bytes
		in total, including the null terminator. Returns the length of the string it tried
		to create, which is the length of 'src' plus the length of 'dest'. If 'sz' is less 
		than the length of 'dest', 'dest' is not null-terminated.
*/
size_t	ft_strlcat(char *dest, const char *src, size_t sz)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (sz == 0)
		return (ft_strlen(src));
	while (dest[i] && i < sz)
		i++;
	while ((i + j + 1) < sz && src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i != sz)
		dest[i + j] = '\0';
	return (i + ft_strlen(src));
}
