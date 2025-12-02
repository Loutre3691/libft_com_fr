/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:04:52 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:38:59 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Vérifie si un caractère est un chiffre (0-9).
 * 
 * @param c Caractère à vérifier
 * @return Valeur non nulle si c est un chiffre, 0 sinon
 */
int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

