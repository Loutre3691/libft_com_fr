/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:46:34 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:39:11 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Convertit une chaîne de caractères en entier.
 * 
 * La fonction ft_atoi convertit la chaîne de caractères pointée par nptr
 * en un entier de type int. Elle ignore les espaces blancs initiaux, gère un
 * signe facultatif ('+' ou '-') et lit les chiffres consécutifs pour construire
 * l'entier. La conversion s'arrête dès qu'un caractère non numérique est rencontré.
 *
 * @param nptr Pointeur vers la chaîne de caractères à convertir
 * @return L'entier résultant de la conversion
 */
int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = (res * 10) + (nptr[i] - '0');
		i++;
	}
	return (res * sign);
}

/*
- Ignore les espaces et caractères de contrôle (\t, \n, etc.) au début
- Gère un signe '+' ou '-' facultatif
- Lit les chiffres consécutifs et construit l'entier
- Arrête la conversion dès qu'un caractère non numérique est rencontré
- Retourne l'entier final, avec le signe appliqué

Avant / Après :
nptr = "  -42";
ft_atoi(nptr) → -42
*/
