/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:33:29 by fde-chec          #+#    #+#             */
/*   Updated: 2025/12/02 15:38:35 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Crée une nouvelle liste en appliquant une fonction à chaque élément.
 * 
 * Parcourt la liste et applique la fonction f à chaque contenu pour créer
 * une nouvelle liste avec les résultats.
 * 
 * @param lst Liste originale
 * @param f Fonction à appliquer à chaque élément
 * @param del Fonction de suppression en cas d'erreur
 * @return Nouvelle liste créée, NULL si l'allocation échoue
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*node;
	void	*content;

	content = NULL;
	newlist = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst != NULL)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			ft_lstclear(&node, del);
		}
		ft_lstadd_back(&newlist, node);
		lst = lst->next;
	}
	return (newlist);
}

/*
- parcourt lst
- applique f sur chaque content pour créer un nouveau nœud
- ajoute chaque nouveau nœud à newlist
- si échec, utilise del et libère les nœuds déjà créés

Avant / Après :
lst = [1]->[2]
f = +1
ft_lstmap(lst, f, del) → [2]->[3]
*/
