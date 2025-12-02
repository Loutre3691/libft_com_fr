/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 00:15:43 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:38:40 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Retourne le dernier élément d'une liste chaînée.
 * 
 * @param lst Pointeur sur le premier élément de la liste
 * @return Pointeur sur le dernier élément de la liste
 */
t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}

/*
- parcourt la liste jusqu'au dernier élément
- retourne le dernier élément

Avant / Après :
lst = [A]->[B]->[C]
ft_lstlast(lst) → [C]
*/

