/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crea <crea@student.42roma.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:42:34 by crea              #+#    #+#             */
/*   Updated: 2024/02/05 14:42:07 by crea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_putendl_fd:
		Writes the string 'str' followed by a newline character to the file descriptor 'fd'.
*/
void	ft_putendl_fd(char *str, int fd)
{
	ft_putstr_fd(str, fd);
	ft_putchar_fd('\n', fd);
}
