/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:20:24 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:39:01 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Vérifie si un caractère est ASCII (0-127).
 * 
 * @param c Caractère à vérifier
 * @return Valeur non nulle si c est ASCII, 0 sinon
 */
int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	else
		return (0);
}

