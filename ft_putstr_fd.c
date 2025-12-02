/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 22:06:46 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:42:10 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Écrit une chaîne dans un file descriptor.
 * 
 * @param s Chaîne à écrire
 * @param fd File descriptor (descripteur de fichier)
 * @return Aucune valeur retournée (void)
 */
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
}

/*
- parcourt la chaîne s
- écrit chaque caractère dans fd

Avant / Après :
s = "Hello", fd = 1;
ft_putstr_fd(s, fd) → affiche "Hello"
*/

