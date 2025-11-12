/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:05:05 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/12 13:52:10 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	DESCRIPTION :
	La fonction strcmp() compare les deux chaînes s1 et s2.
	

	RETURN VALUE :
	Renvoient un entier inférieur, égal ou supérieur à zéro si s1 
	(ou ses n premiers octets) est respectivement inférieure, 
	égale ou supérieure à s2.

*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*su1 = (const unsigned char	*)s1;
	const unsigned char	*su2 = (const unsigned char	*)s2;

	i = 0;
	while (i < n && (su1[i] != '\0' || su2[i] != '\0'))
	{
		if (su1[i] != su2[i])
		{
			return (su1[i] - su2[i]);
		}
		i++;
	}
	return (0);
}
