/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 22:13:23 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:41:21 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Écrit une chaîne suivi d'une nouvelle ligne dans un file descriptor.
 * 
 * @param s Chaîne à écrire
 * @param fd File descriptor (descripteur de fichier)
 * @return Aucune valeur retournée (void)
 */
void	ft_putendl_fd(char *s, int fd)
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
	write(fd, "\n", 1);
}

/*
- parcourt la chaîne s
- écrit chaque caractère dans fd
- ajoute un '\n' à la fin

Avant / Après :
s = "Hello", fd = 1;
ft_putendl_fd(s, fd) → affiche "Hello\n"
*/
