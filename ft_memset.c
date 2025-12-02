/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:44:12 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:40:48 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Remplit une zone mémoire avec un octet spécifique.
 * 
 * @param s Pointeur sur la zone mémoire
 * @param c Octet à répéter
 * @param n Nombre d'octets à remplir
 * @return Pointeur sur s
 */
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*news;

	i = 0;
	news = (unsigned char *)s;
	while (i < n)
	{
		news[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*
- parcourt les n premiers octets de s
- assigne chaque octet à la valeur c (convertie en unsigned char)

Avant / Après :
s = {1,2,3,4,5}, c = 0, n = 3
ft_memset(s, c, 3) → s = {0,0,0,4,5}
*/
