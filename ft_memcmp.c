/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:02:45 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/07 12:17:45 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	DESCRIPTION :
	La fonction memcmp() compare les n premiers octets des zones mémoire s1
    et s2.

	RETURN VALUE :
	La fonction memcmp() renvoie un entier négatif, nul ou positif si les n
    premiers  octets  de  s1  sont  respectivement  inférieurs,  égaux   ou
    supérieurs aux n premiers octets de s2.

*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((((unsigned char *)s1)[i]) != ((unsigned char *)s2)[i])
		{
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		}
		i++;
	}
	return (0);
}
