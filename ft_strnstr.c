/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:35:05 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/11 17:28:20 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	DESCRIPTION 
		La fonction `ft_strnstr` recherche **la première occurrence** de la
		chaîne `s2` dans la chaîne `s1`, mais **uniquement dans les `n` premiers 
		caractères** de `s1`.
		
	RETURN 
	Un pointeur vers le **début de la première occurrence** de `s2` dans `s1` 
	(si trouvée).
  	NULL` si `s2` n’est pas trouvée dans les `n` premiers caractères de `s1`.
 	Si `s2` est une chaîne vide, la fonction retourne `s1`.
*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		while (big[i + j] == little[j] && (i + j) < len)
		{
			j++;
			if (little[j] == '\0')
			{
				return ((char *)big + i);
			}
		}
		j = 0;
		i++;
	}
	return (0);
}
//  #include <stdio.h>
//  #include <bsd/string.h>
//  int main()
//  {
// 	char	*big = "salut ca va";
// 	char	*little = "lut";

// 	return 0;	
// }
