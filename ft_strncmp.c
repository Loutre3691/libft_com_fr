/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:05:05 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:46:50 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Compare deux chaînes sur n caractères.
 * 
 * @param s1 Première chaîne
 * @param s2 Deuxième chaîne
 * @param n Nombre de caractères à comparer
 * @return Entier négatif, nul ou positif selon la comparaison
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*su1 = (const unsigned char	*)s1;
	const unsigned char	*su2 = (const unsigned char	*)s2;

	i = 0;
	while (i < n && (su1[i] != '\0' || su2[i] != '\0'))
	{
		if (su1[i] != su2[i])
		{
			return (su1[i] - su2[i]);
		}
		i++;
	}
	return (0);
}

/*
- parcourt les deux chaînes s1 et s2 jusqu'à n caractères ou jusqu'à '\0'
- compare caractère par caractère
- retourne la différence entre le premier caractère différent ou 0 si identiques sur les n premiers caractères

Avant / Après :
s1 = "Hello", s2 = "Hellp", n = 4
ft_strncmp(s1, s2, 4) → retourne 0 (les 4 premiers caractères sont identiques)
*/
