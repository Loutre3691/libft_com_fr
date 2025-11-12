/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 11:49:50 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/06 17:15:04 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	DESCRIPTION :
	La fonction memmove() copie n octets depuis la zone mémoire src vers la
    zone mémoire dest. Les deux zones  peuvent  se  chevaucher :  la  copie
    s’effectue  comme  si  src  était  premièrement  copiée dans un tableau
    temporaire ne chevauchant pas src ou dest puis il est copié vers  dest.

	RETURN VALUE :
	Renvoie un pointeur sur dest.
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (n == 0)
		return ((void *)dest);
	if (((unsigned char *)d) > ((unsigned char *)s))
	{
		while (n-- > 0)
			((unsigned char *)d)[n] = ((unsigned char *)s)[n];
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)d)[i] = ((unsigned char *)s)[i];
			i++;
		}
	}
	return (dest);
}
