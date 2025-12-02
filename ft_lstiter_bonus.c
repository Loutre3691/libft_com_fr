/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:34:19 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:38:42 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Applique une fonction à chaque élément d'une liste chaînée.
 * 
 * @param lst Pointeur sur le premier élément de la liste
 * @param f Fonction à appliquer à chaque élément
 * @return Aucune valeur retournée (void)
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
- parcourt la liste
- applique f sur chaque content

Avant / Après :
lst = [A->1]->[B->2]
f = print
ft_lstiter(lst, f) → affiche 1 2
*/
