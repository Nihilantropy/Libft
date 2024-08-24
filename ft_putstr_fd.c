/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crea <crea@student.42roma.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:11:03 by crea              #+#    #+#             */
/*   Updated: 2024/02/05 14:42:05 by crea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_putstr_fd:
		Writes the string 'str' to the file descriptor 'fd'.
		The function iterates through each character of the string and writes it to 'fd'.
		It continues until the null terminator of the string is reached.
*/
void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
		write(fd, &str[i++], 1);
}
