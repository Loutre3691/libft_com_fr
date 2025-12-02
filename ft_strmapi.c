/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:54:42 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:29:38 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Applique une fonction à chaque caractère et crée une nouvelle chaîne.
 * 
 * Crée une nouvelle chaîne en appliquant la fonction f à chaque caractère de s.
 * 
 * @param s Chaîne source
 * @param f Fonction à appliquer (reçoit l'index et le caractère)
 * @return Nouvelle chaîne allouée, NULL si l'allocation échoue
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new;

	i = 0;
	if (!s || !f)
		return (NULL);
	new = malloc((strlen(s) + 1) * sizeof(char));
	if (!new)
		return (NULL);
	while (s[i] != '\0')
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*
- alloue une nouvelle chaîne de la même longueur que s
- parcourt chaque caractère de s
- applique la fonction f(i, s[i]) à chaque caractère et stocke le résultat dans la nouvelle chaîne
- retourne la nouvelle chaîne

Avant / Après :
s = "abcd", f = (i,c) -> c + 1
ft_strmapi(s, f) → retourne "bcde"
*/
