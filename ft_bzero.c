/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:05:55 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/05 12:07:50 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	DESCRIPTION :
	 La  fonction bzero() met à 0 les n premiers octets du bloc pointé par s
    (octets contenant « \0 »).

	RETURN VALUE :
	Aucune.
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
