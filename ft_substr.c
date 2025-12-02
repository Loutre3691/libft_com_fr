/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:29:08 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:32:40 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Extrait une sous-chaîne d'une chaîne donnée.
 * 
 * Crée une nouvelle chaîne commençant à l'index start avec len caractères.
 * 
 * @param s Chaîne source
 * @param start Index de démarrage
 * @param len Nombre de caractères à extraire
 * @return Nouvelle sous-chaîne allouée, NULL si l'allocation échoue
 */
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}

/*
- extrait une sous-chaîne de s à partir de l’indice start sur une longueur len
- alloue dynamiquement la nouvelle sous-chaîne
- retourne la nouvelle chaîne ou NULL si l’allocation échoue

Avant / Après :
s = "Hello World", start = 6, len = 5
ft_substr(s, 6, 5) → retourne "World"
*/
