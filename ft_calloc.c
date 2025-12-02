/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 17:29:11 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:34:54 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Alloue dynamiquement une zone mémoire initialisée à zéro.
 * 
 * Alloue de la mémoire pour un tableau de nmemb éléments de size octets
 * et initialise tous les octets à zéro.
 * 
 * @param nmemb Nombre d'éléments
 * @param size Taille de chaque élément en octets
 * @return Pointeur sur la mémoire allouée, NULL si l'allocation échoue
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;
	size_t	total;

	total = nmemb * size;
	if (size != 0 && total / size != nmemb)
		return (NULL);
	str = malloc(nmemb * size);
	if (!str)
		return (NULL);
	ft_bzero(str, total);
	return (str);
}

/*
- vérifie les dépassements d'entier lors du calcul de la taille totale
- alloue dynamiquement nmemb * size octets
- initialise toute la mémoire à zéro avec ft_bzero
- retourne un pointeur vers la mémoire allouée, ou NULL si l'allocation échoue
*/
