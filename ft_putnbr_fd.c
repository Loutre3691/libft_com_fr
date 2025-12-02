/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 22:33:07 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:41:36 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Écrit un entier dans un file descriptor.
 * 
 * @param n Entier à écrire
 * @param fd File descriptor (descripteur de fichier)
 * @return Aucune valeur retournée (void)
 */
void	ft_putnbr_fd(int n, int fd)
{
	long int	nbr;

	nbr = n;
	if (nbr == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr *= -1;
	}
	if (nbr < 10)
		ft_putchar_fd(nbr + '0', fd);
	else
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
}

/*
- convertit n en caractères
- écrit chaque chiffre dans fd
- gère les nombres négatifs

Avant / Après :
n = -42, fd = 1;
ft_putnbr_fd(n, fd) → affiche "-42"
*/

