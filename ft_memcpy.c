/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:34:31 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:40:22 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copie une zone mémoire dans une autre.
 * 
 * Copie n octets depuis src vers dest. Les zones ne doivent pas se chevaucher.
 * 
 * @param dest Zone mémoire destination
 * @param src Zone mémoire source
 * @param n Nombre d'octets à copier
 * @return Pointeur sur dest
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*
- vérifie si dest et src ne sont pas NULL
- copie n octets de src vers dest octet par octet
- retourne un pointeur vers dest

Avant / Après :
src = "Hello";
dst = "" (vide);
ft_memcpy(dst, src, 5) → dst = "Hello"
*/
