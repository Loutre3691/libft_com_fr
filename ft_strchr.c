/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:44:49 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/07 12:20:51 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	DESCRIPTION :
	La fonction strchr() renvoie un pointeur sur la première occurrence du
    caractère c dans la chaîne s.

	RETURN VALUE :
	Renvoient  un  pointeur  sur  le
    caractère correspondant, ou NULL si le caractère n’a pas été trouvé.
*/

char	*ft_strchr(const char *s, int c)
{
	int	i;

	c = (char)c;
	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	if (s[i] == c)
	{
		return ((char *)&s[i]);
	}
	else
		return (NULL);
}
// #include <stdio.h>
// int main()
// {
// 	char *str = "abcdefghbj";
// 	printf("%s", ft_strchr(str, 's'));
// 	return(0);
// }