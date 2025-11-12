/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:15:34 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/12 10:34:13 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	DESCIRPTION
		fonctionne de la même manière que  'ft_lstdelone' , mais au 
		lieu de supprimer un seul élément, il supprime l'élément passé en 
		paramètre ainsi que tous les éléments suivants. FREE
	RETURN
		Rien
*/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	
	if (!lst || !*lst || !del)
		return;
	while(*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}
/*
*lst -> [A] -> [B] -> [C] -> NULL

*lst -> [B] -> [C] -> NULL

[A] est libéré (free)

tmp -> [B] -> [C] -> NULL

*/