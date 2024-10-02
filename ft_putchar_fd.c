/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crea <crea@student.42roma.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:07:52 by crea              #+#    #+#             */
/*   Updated: 2024/02/05 14:46:26 by crea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_putchar_fd:
**	Writes the character 'c' to the file descriptor 'fd'.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
