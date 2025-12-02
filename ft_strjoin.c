/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:21:01 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:45:40 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Concatène deux chaînes en une nouvelle chaîne allouée.
 * 
 * Alloue dynamiquement une nouvelle chaîne qui est la concaténation de s1 et s2.
 * 
 * @param s1 Première chaîne
 * @param s2 Deuxième chaîne
 * @return Pointeur sur la nouvelle chaîne, NULL si l'allocation échoue
 */
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
	new = ft_calloc((malloc_size + 1), sizeof(char));
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
	return (new);
}

/*
- vérifie si s1 et s2 != NULL
- alloue dynamiquement une nouvelle chaîne de taille strlen(s1) + strlen(s2)
- copie s1 puis s2 dans la nouvelle chaîne
- retourne un pointeur vers la nouvelle chaîne

Avant / Après :
s1 = "Hello", s2 = "World";
ft_strjoin(s1, s2) → "HelloWorld"
*/
