/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crea <crea@student.42roma.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:02:19 by crea              #+#    #+#             */
/*   Updated: 2024/02/05 14:40:20 by crea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getdigits(long int n);

/*	ft_itoa:
**	Converts an integer 'n' into a string representation.
**	Handles negative numbers and allocates sufficient memory for the result.
**	Returns a pointer to the newly allocated string containing the number.
**	If the memory allocation fails, returns NULL.
**	(i.e., 42 -> "42")
*/
char	*ft_itoa(int n)
{
	char		*digit_str;
	int			digits;
	int			j;
	long int	nb;

	nb = (long int)n;
	digits = getdigits(nb);
	digit_str = (char *)malloc(digits + 1);
	j = -1;
	if (!digit_str)
		return (NULL);
	digit_str[digits--] = '\0';
	if (nb < 0)
	{
		nb *= -1;
		digit_str[0] = '-';
		j = 0;
	}
	while (digits > j)
	{
		digit_str[digits] = (nb % 10) + '0';
		nb = nb / 10;
		digits--;
	}
	return (digit_str);
}

/*	getdigits:
		Counts the number of decimal digits in the integer 'n'.
		If 'n' is negative, it counts an additional digit for the minus sign.
		Returns the total number of digits needed to represent 'n' as a string.
*/
static int	getdigits(long int n)
{
	int	digits;

	digits = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		digits++;
	}
	while (n > 0)
	{
		digits++;
		n /= 10;
	}
	return (digits);
}
