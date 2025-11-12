/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 21:41:31 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/10 13:06:37 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	DESCRIPTION
		Utilisation fonction write, envoi le char "c" dans le
		file descriptor specifie.
	RETURN
		Riem
		
*/
void	ft_putchar_fd(char c, int fd)
{
	if (!c)
		return ;
	write (fd, &c, 1);
}
