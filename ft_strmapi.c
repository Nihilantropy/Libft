/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crea <crea@student.42roma.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:27:56 by crea              #+#    #+#             */
/*   Updated: 2024/02/05 14:43:16 by crea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_strmapi:
**	Creates a new string by applying the function 'f' to each character of 'str',
**	with the character index as the first parameter, and returns the resulting string.
*/
char	*ft_strmapi(const char *str, char (*f)(unsigned int, char))
{
	char	*str_f;
	size_t	i;

	str_f = ft_strdup(str);
	if (!str_f)
		return (NULL);
	i = 0;
	while (str_f[i])
	{
		str_f[i] = (*f)(i, str_f[i]);
		i++;
	}
	return (str_f);
}
