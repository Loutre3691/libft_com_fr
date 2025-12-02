/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 21:40:08 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:38:46 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Ajoute un élément au début d'une liste chaînée.
 * 
 * @param lst Pointeur sur le pointeur de la liste chaînée
 * @param new Nouvel élément à ajouter au début
 * @return Aucune valeur retournée (void)
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

 /*
- nouveau->next = *lst
- *lst = nouveau

Avant / Après :
lst = [A]->[B]->[C]
new = [X]->NULL
ft_lstadd_front(&lst, new) → [X]->[A]->[B]->[C]
*/
