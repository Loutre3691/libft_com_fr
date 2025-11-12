/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:16:54 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/12 13:53:04 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
/*
	DESCRIPTION
		Convertir les chiffres de la valeur donnee en une string se terminant 
		par \0, la difference entre putnbr et itoa est que itoa retourne pas 
		de valeur alors que putnbr utilise write.
		
	RESULT
		Renvoie un poiteur vers une string, retourne NULL si l'allocation echoue
*/
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

char	*ft_itoa(int n)
{
	char		*str;
	int long	nbr;
	int i;

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
	if (nbr == 0) {
		str[0] = '0';
	}
	while (nbr != 0)
	{
		str[i--] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (str);
}

// int main ()
// {
// 	printf("%s\n", ft_itoa(0));
// }
