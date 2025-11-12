/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:12:14 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/05 12:30:31 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	DESCRIPTION :
	La  fonction strlen() calcule la longueur de la chaîne de caractères s,
    sans compter le caractère nul « \0 » final.

	RETURN VALUE :
	La fonction strlen() renvoie le nombre de caractères dans la chaîne s
*/

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
