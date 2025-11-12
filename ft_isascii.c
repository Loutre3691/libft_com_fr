/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:20:24 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/05 12:12:50 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	DESCRIPTION :
	Vérifie si c est un unsigned char sur 7 bits,  entrant  dans  le
    jeu de caractères ASCII.

	RESULT VALUE :
	Les  valeurs  renvoyées sont non nulles si le caractère c entre dans la
    catégorie testée, et zéro sinon.
*/

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	else
		return (0);
}
