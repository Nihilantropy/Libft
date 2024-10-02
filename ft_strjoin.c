/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crea <crea@student.42roma.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:01:42 by crea              #+#    #+#             */
/*   Updated: 2024/02/05 14:43:16 by crea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_strjoin:
**	Allocates and returns a new string that is the result of concatenating
**	's1' and 's2'. The new string is null-terminated and its size is the
**	sum of the lengths of 's1' and 's2' plus one for the null terminator.
*/
char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str_join;
	size_t	sz_join;
	size_t	i;

	sz_join = ft_strlen(s1) + ft_strlen(s2);
	str_join = (char *)malloc(sz_join + 1);
	if (!str_join)
		return (NULL);
	i = 0;
	while (*s1)
		str_join[i++] = *s1++;
	while (*s2)
		str_join[i++] = *s2++;
	str_join[i] = '\0';
	return (str_join);
}
