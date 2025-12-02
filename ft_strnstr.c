/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:35:05 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:47:05 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Cherche une sous-chaîne dans une chaîne (limite de taille).
 * 
 * Cherche la première occurrence de little dans big, dans les len premiers caractères.
 * 
 * @param big Chaîne à parcourir
 * @param little Sous-chaîne à chercher
 * @param len Nombre maximum de caractères à examiner
 * @return Pointeur sur la première occurrence, NULL si non trouvée
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		while (big[i + j] == little[j] && (i + j) < len)
		{
			j++;
			if (little[j] == '\0')
			{
				return ((char *)big + i);
			}
		}
		j = 0;
		i++;
	}
	return (0);
}

/*
- cherche la première occurrence de la chaîne needle dans haystack
- ne parcourt que les n premiers caractères de haystack
- retourne un pointeur vers le début de l’occurrence trouvée ou NULL si non trouvé

Avant / Après :
haystack = "Hello World", needle = "World", n = 11
ft_strnstr(haystack, needle, 11) → retourne pointeur vers 'W' dans haystack
*/
