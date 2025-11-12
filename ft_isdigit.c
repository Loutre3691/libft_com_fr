/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:04:52 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/05 12:14:59 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	DESCRIPTION :
	Vérifie si l’on a un chiffre (0 à 9).

	RETURN VALUE:
	Les  valeurs  renvoyées sont non nulles si le caractère c entre dans la
    catégorie testée, et zéro sinon.
*/

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
