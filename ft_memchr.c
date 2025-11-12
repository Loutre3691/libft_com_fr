/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:31:51 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/07 12:17:39 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	DESCRIPTION :
	La  fonction  memchr() examine les n premiers octets de la zone mémoire
    pointée par  s  à  la  recherche  du  caractère  c.  Le  premier  octet
    correspondant   à   c   (interprété  comme  un  unsigned  char)  arrête
    l’opération.

	RETURN VALUE:
	Renvoient un pointeur  sur  l’octet correspondant, 
	ou NULL si le caractère n’est pas présent dans la zone de mémoire concernée.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (((unsigned char *)&s[i]));
		i++;
	}
	return (0);
}
