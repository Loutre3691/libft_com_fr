/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:34:31 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/07 12:17:48 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION :
	La  fonction memcpy() copie n octets depuis la zone mémoire src vers la
    zone mémoire dest. Les deux zones ne  doivent  pas  se  chevaucher.  Si
    c’est le cas, utilisez plutôt memmove(3).

	RETURN VALUE :
	La fonction memcpy() renvoie un pointeur sur dest
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
