/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:31:51 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:40:02 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Cherche un caractère dans une zone mémoire.
 * 
 * Examine les n premiers octets de la zone mémoire et retourne un pointeur
 * sur la première occurrence du caractère c.
 * 
 * @param s Pointeur sur la zone mémoire
 * @param c Caractère à chercher
 * @param n Nombre d'octets à examiner
 * @return Pointeur sur la première occurrence, NULL si non trouvé
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (((unsigned char *)&s[i]));
		i++;
	}
	return (0);
}


/*
- parcourt les n premiers octets de s
- si un octet correspondant à c est trouvé → retourne pointeur vers cet octet
- sinon → retourne NULL

Avant / Après :
tab = {1,2,3,4,5};
ft_memchr(tab, 3, 5) → pointe vers tab[2]
*/
