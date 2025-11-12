/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:44:12 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/07 12:17:51 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	DESCRIPTION :
	La  fonction  memset() remplit les n premiers octets de la zone mémoire
    pointée par s avec l’octet c.

	RETURN VALUE :
	La fonction memset() renvoie un pointeur sur la zone mémoire s.
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
