/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 00:07:25 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:39:50 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Compte le nombre d'éléments dans une liste chaînée.
 * 
 * @param lst Pointeur sur le premier élément de la liste
 * @return Nombre d'éléments dans la liste
 */
int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*
- parcourt la liste
- compte chaque élément

Avant / Après :
lst = [A]->[B]->[C]
ft_lstsize(lst) → 3
*/

