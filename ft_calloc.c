/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 17:29:11 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/09 19:53:18 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	DESCRIPTION :
	Alloue la mémoire nécessaire pour un tableau de nmemb éléments
    de  size  octets, Cette zone est remplie avec des zéros. evite des bugs
	lies a des variables non initialisees.
	
	RETURN VALUE :
	Un pointeur de la mémoire allouée. Si elles  échouent, elles 
	renvoient NULL.
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;
	size_t	total;

	total = nmemb * size;
	if (size != 0 && total / size != nmemb)
		return (NULL);
	str = malloc(nmemb * size);
	if (!str)
		return (NULL);
	ft_bzero(str, total);
	return (str);
}
// ligne 30 : verifie l'overflow
// #include <stdlib.h>
// #include <stdio.h>
// int main(void)
// {
// 	void *ptr;
// 	int taille;
// 	taille = 410;
// 	ptr = ft_calloc(taille, sizeof(int));
// 	while(taille)
// 	{
// 		printf("%d\n", *(int *)ptr);
// 		ptr++;
// 		taille--;
// 	}
// 	return 0;
// }
