/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crea <crea@student.42roma.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:55:36 by crea              #+#    #+#             */
/*   Updated: 2024/02/05 14:40:16 by crea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_isprint:
		Checks if the character 'c' is a printable character.
		Printable characters are those with ASCII values between 32 and 126, inclusive.
		Returns 1 if 'c' is printable, 0 otherwise.
*/
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
