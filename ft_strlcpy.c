/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:55:43 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:46:07 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Copie une chaîne dans une autre (avec limite de taille).
 * 
 * @param dst Chaîne destination
 * @param src Chaîne source à copier
 * @param size Taille maximale du buffer destination
 * @return Longueur totale de la chaîne source
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}

/*
- copie au maximum size - 1 caractères de src vers dest
- termine toujours dest par '\0' si size > 0
- retourne la longueur de src

Avant / Après :
src = "Hello", dest[10]
ft_strlcpy(dest, src, 10) → dest = "Hello", retourne 5
*/
