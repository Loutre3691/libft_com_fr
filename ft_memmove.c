/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 11:49:50 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:40:37 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Copie une zone mémoire dans une autre (zones pouvant se chevaucher).
 * 
 * Copie n octets depuis src vers dest. Contrairement à memcpy, fonctionne
 * même si les zones se chevauchent.
 * 
 * @param dest Zone mémoire destination
 * @param src Zone mémoire source
 * @param n Nombre d'octets à copier
 * @return Pointeur sur dest
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (n == 0)
		return ((void *)dest);
	if (((unsigned char *)d) > ((unsigned char *)s))
	{
		while (n-- > 0)
			((unsigned char *)d)[n] = ((unsigned char *)s)[n];
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)d)[i] = ((unsigned char *)s)[i];
			i++;
		}
	}
	return (dest);
}

/*
- vérifie si dest et src se chevauchent
- si dest > src (zones qui se chevauchent à droite) :
    - copie les octets de la fin vers le début pour éviter d'écraser src
- sinon :
    - copie les octets du début vers la fin comme ft_memcpy

Avant / Après :
src = {1,2,3,4,5}
ft_memmove(src+1, src, 5) → src = {1,1,2,3,4}
*/
