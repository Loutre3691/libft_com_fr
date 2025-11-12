/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:54:42 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/09 22:03:59 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
    DESCRIPTION
        elle prend 2 parametres, une str et une ft, elle applique la ft (f) à 
		chaque char de la str s. elle transmet le char de la ft (f) dans
		une nouvelle string. Utilisation de malloc.
    RETURN
        La nouvelle str resultant de l'application de cette f sur chaque char 
		de la str.
		NULL si l'allocation echoue.
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
