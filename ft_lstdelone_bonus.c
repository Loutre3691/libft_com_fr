/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 00:37:01 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:26:07 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Supprime et libère un seul élément de liste.
 * 
 * @param lst Élément à supprimer
 * @param del Fonction de suppression pour libérer le contenu
 * @return Aucune valeur retournée (void)
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*
- applique del sur lst->content
- libère le nœud lst

Avant / Après :
lst = [A->content]
ft_lstdelone(lst, del) → nœud supprimé, mémoire libérée
*/

