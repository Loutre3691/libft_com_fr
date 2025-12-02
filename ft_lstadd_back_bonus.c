/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 23:00:17 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:36:02 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Ajoute un élément à la fin d'une liste chaînée.
 * 
 * @param lst Pointeur sur le pointeur de la liste chaînée
 * @param new Nouvel élément à ajouter à la fin
 * @return Aucune valeur retournée (void)
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

/*
- trouve le dernier élément de lst
- last->next = new

Avant / Après :
lst = [A]->[B]->[C]
new = [X]->NULL
ft_lstadd_back(&lst, new) → [A]->[B]->[C]->[X]
*/
