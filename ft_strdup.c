/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:34:38 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/11 17:24:03 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
DESCRIPTION
    La fonction strdup() alloue une nouvelle zone memoire avec malloc, copie tous
	les caracteres de la string originale dans cette novuelle zone. la chaine 
	retournee est independante de l'originale, peut etre modifier sans toucher a
	l'originale
RETURN VALUE
     La  fonction  strdup()  renvoie un pointeur sur la chaîne dupliquée,
	ou NULL s’il n’y avait pas assez de mémoire.
*/

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dest;

	i = 0;
	if (!s)
		return (NULL);
	dest = ft_calloc((ft_strlen(s) + 1), sizeof(char));
	if (!dest)
		return (NULL);
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	return (dest);
}
// +1 = \0