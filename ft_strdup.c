/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:34:38 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:45:03 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Duplique une chaîne dans une nouvelle zone mémoire allouée.
 * 
 * @param s Chaîne à dupliquer
 * @return Pointeur sur la chaîne dupliquée, NULL si l'allocation échoue
 */
char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = ft_calloc((ft_strlen(s) + 1), sizeof(char));
	if (!dest)
		return (NULL);
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	return (dest);
}

/*
- vérifie si s != NULL
- alloue dynamiquement une nouvelle chaîne de taille strlen(s) + 1
- copie chaque caractère de s dans la nouvelle chaîne
- retourne un pointeur vers la nouvelle chaîne

Avant / Après :
s = "Hello";
ft_strdup(s) → "Hello" (nouvelle chaîne indépendante)
*/
