/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:04:52 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:38:51 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Vérifie si un caractère est imprimable (32-126).
 * 
 * @param c Caractère à vérifier
 * @return Valeur non nulle si c est imprimable, 0 sinon
 */
int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
		return (1);
	else
		return (0);
}

