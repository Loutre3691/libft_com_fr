/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:44:49 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:44:34 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Cherche la première occurrence d'un caractère dans une chaîne.
 * 
 * @param s Chaîne à parcourir
 * @param c Caractère à chercher
 * @return Pointeur sur la première occurrence, NULL si non trouvé
 */
char	*ft_strchr(const char *s, int c)
{
	int	i;

	c = (char)c;
	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return ((char *)&s[i]);
	else
		return (NULL);
}

/*
- parcourt s à la recherche du caractère c
- retourne un pointeur vers le premier c trouvé ou NULL

Avant / Après :
s = "hello", c = 'l';
ft_strchr(s, c) → pointe vers s[2]
*/
