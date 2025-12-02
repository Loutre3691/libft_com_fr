/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 20:18:21 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:45:14 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Applique une fonction à chaque caractère d'une chaîne (modifie sur place).
 * 
 * @param s Chaîne à traiter
 * @param f Fonction à appliquer (reçoit l'index et l'adresse du caractère)
 * @return Aucune valeur retournée (void)
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*
- parcourt chaque caractère de s
- applique f(i, &s[i]) pour chaque index i

Avant / Après :
s = "abcd", f = (i,c) { *c += i; }
ft_striteri(s, f) → s = "aceg"
*/

