/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:21:01 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/09 18:38:08 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	DESCRIPTION
		Alloue de la memoire (malloc) et retourne une nouvelle string,
		qui affiche le resultat de la concatenation de s1 et s2.

	RETURN
		La nouvelle string, NULL si l'allocation echoue.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t			i;
	size_t			j;
	char			*new;
	size_t			malloc_size;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	malloc_size = ft_strlen(s1) + ft_strlen(s2);
	new = malloc((malloc_size + 1) * sizeof(char));
	if (!new)
		return (NULL);
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[i] = '\0';
	return (new);
}
// ligne 37 = strlcpy
// ligne  42 = strlcat