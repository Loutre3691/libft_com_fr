/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:25:46 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:45:54 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Ajoute une chaîne à la fin d'une autre (avec limite de taille).
 * 
 * @param dest Chaîne destination
 * @param src Chaîne source à ajouter
 * @param size Taille maximale du buffer destination
 * @return Longueur totale de la chaîne créée
 */
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;

	i = 0;
	if ((!dest || !src) && size == 0)
		return (0);
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (size <= destlen)
		return (size + srclen);
	while (src[i] != '\0' && (destlen + i < (size -1)))
	{
		dest[i + destlen] = src[i];
		i++;
	}
	dest[i + destlen] = '\0';
	return (destlen + srclen);
}

/*
- calcule la longueur initiale de dest et la longueur de src
- concatène src à dest en ne dépassant pas size - 1 caractères
- termine toujours par '\0' si size > 0
- retourne la longueur que dest aurait eue si size était illimité

Avant / Après :
dest = "Hello", src = "World", size = 10
ft_strlcat(dest, src, 10) → dest = "HelloWorl", retourne 10
*/
