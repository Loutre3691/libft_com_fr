/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:07:20 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:31:44 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Cherche la dernière occurrence d'un caractère dans une chaîne.
 * 
 * @param s Chaîne à parcourir
 * @param c Caractère à chercher
 * @return Pointeur sur la dernière occurrence, NULL si non trouvée
 */
char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if ((char)c == s[i])
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}

/*
- parcourt la chaîne s pour trouver la dernière occurrence du caractère c
- retourne un pointeur vers ce caractère ou NULL si non trouvé

Avant / Après :
s = "hello world", c = 'l'
ft_strrchr(s, c) → retourne pointeur vers le dernier 'l' dans s
*/
