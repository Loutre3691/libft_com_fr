/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:05:55 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:34:08 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Met à zéro les n premiers octets d'une zone mémoire.
 * 
 * @param s Pointeur vers la zone mémoire à initialiser
 * @param n Nombre d'octets à mettre à zéro
 * @return Aucune valeur retournée (void)
 */
void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*news;

	i = 0;
	news = (char *)s;
	while (i < n)
	{
		news[i] = '\0';
		i++;
	}
}

/*
- parcourt les n premiers octets de s
- met chaque octet à zéro

Avant / Après :
tab = {1,2,3,4};
ft_bzero(tab, 4) → tab = {0,0,0,0}
*/

