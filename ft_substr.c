/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:29:08 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/11 17:17:37 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	DESCRIPTION :
		La fonction ft_substr extrait une sous-chaîne de la chaîne donnée en
		allouant suffisamment de mémoire pour la nouvelle chaîne commençant 
		à l'index start et se terminant à len caractères.
	RETURN VALUE :
		la sous-chaine, NULL si ca echoue.
*/

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	size_t	malloc_size;
	char	*temp;

	i = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if ((size_t) start > s_len)
		return (ft_strdup(""));
	malloc_size = s_len - start;
	if (malloc_size > len)
		malloc_size = len;
	temp = malloc((malloc_size + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	ft_strlcpy(temp, s + start , len + 1);
	
	return (temp);
}
	// 26. creer size de s et size de malloc
	// 31. securite si s existe pas
	// 33. definir taille s avec strlen
	// 34. secu start + grand que taille de s renvoi str vide 
	// 36. definir taille malloc (taille de s - longueur)
	// 37. secu si taille de malloc + grand que longueur donne __LITTLE_ENDIAN
	// 38. alloue de la memoire, em rajoutant +1 pour le \0
	// 40. secu pour variable temporaire
	// 42. utilisation de strlcpy pour copier (s + start = pour renvoyer start)

/*
EXEMPLE
	char *str = "Hello, world!";
	char *sub = ft_substr(str, 7, 5);
	printf("%s\n", sub);
	free(sub);

RESULTAT
	world

EXPLICATION
	on commence a l'indice 7('w')
	on prend 5 caracteres -> "world"
*/