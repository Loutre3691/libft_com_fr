/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:16:54 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:35:31 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	count;

	count = 0;
	if (n == 0) 
	{
		return (1);
	}
	if (n < 0) 
	{
		count = 1;
	}
	while (n != 0)
	{
		count = count + 1;
		n = n / 10;
	}
	return (count);
}

/**
 * @brief Convertit un entier en chaîne de caractères.
 * 
 * Alloue dynamiquement une chaîne et convertit l'entier n en sa représentation
 * textuelle.
 * 
 * @param n Entier à convertir
 * @return Pointeur sur la chaîne allouée, NULL si l'allocation échoue
 */
char	*ft_itoa(int n)
{
	char		*str;
	int long	nbr;
	int			i;

	i = ft_intlen(n);
	nbr = n;
	str = ft_calloc(ft_intlen(n) + 1, sizeof (char));
	if (!str)
		return (NULL);
	if (nbr < 0)
	{
		nbr *= -1;
		str[0] = '-';
	}
	str[i--] = '\0';
	if (nbr == 0)
	{
		str[0] = '0';
	}
	while (nbr != 0)
	{
		str[i--] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (str);
}
/*
- calcule le nombre de caractères nécessaires pour représenter n
- alloue dynamiquement une chaîne de cette taille + 1
- convertit n en caractères et les stocke dans la chaîne
- retourne un pointeur vers la chaîne

Avant / Après :
n = 42;
ft_itoa(n) → "42"
*/
