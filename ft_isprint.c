/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:04:52 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/04 14:25:24 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	DESCRIPTION :
	Vérifie   s’il  s’agit  d’un  caractère  imprimable,  y  compris
    l’espace.

	RETURN VALUE :
	Les  valeurs  renvoyées sont non nulles si le caractère c entre dans la
    catégorie testée, et zéro sinon.
*/

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
		return (1);
	else
		return (0);
}
