/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:36:44 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:32:03 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Supprime les caractères spécifiés au début et fin d'une chaîne.
 * 
 * @param s1 Chaîne à traiter
 * @param set Chaîne contenant les caractères à supprimer
 * @return Nouvelle chaîne allouée, NULL si l'allocation échoue
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end -1]))
		end--;
	return (ft_substr(s1, start, end - start));
}

/*
- supprime tous les caractères de set au début et à la fin de s1
- alloue dynamiquement une nouvelle chaîne contenant le résultat
- retourne la nouvelle chaîne ou NULL si l’allocation échoue

Avant / Après :
s1 = "  hello  ", set = " "
ft_strtrim(s1, set) → retourne "hello"
*/
