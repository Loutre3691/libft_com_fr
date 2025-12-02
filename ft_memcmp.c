/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:02:45 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:40:12 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Compare deux zones mémoire.
 * 
 * @param s1 Première zone mémoire
 * @param s2 Deuxième zone mémoire
 * @param n Nombre d'octets à comparer
 * @return Entier négatif, nul ou positif selon la comparaison
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((((unsigned char *)s1)[i]) != ((unsigned char *)s2)[i])
		{
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		}
		i++;
	}
	return (0);
}

/*
- parcourt les n premiers octets de s1 et s2
- compare octet par octet
- retourne la différence du premier octet différent ou 0 si identiques

Avant / Après :
s1 = "abc", s2 = "abd", n = 3;
ft_memcmp(s1, s2, 3) → -1
*/
