/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:33:29 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/12 11:10:13 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	DESCIRPTION
		fonctionne de la même manière que ft_lstiter, mais il
		crée une nouvelle liste  résultant des applications successives
		de 'f' sur le contenu de chaque élément. malloc, free
	RETURN
		La nouvelle liste
		NULL si l'allocation echoue
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*node;
	
	newlist = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst != NULL)
	{ 
		node = ft_lstnew(f(lst->content));
			if (!node)
				ft_lstclear(&node, del);
		ft_lstadd_back(&newlist, node);
		lst = lst->next;
	}
	return(newlist);
}