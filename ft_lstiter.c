/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:34:19 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/11 19:42:39 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	DESCIRPTION
		parcours la liste lst et applique la fonction 'f' au contenu de chaque
		noeud
	RETURN
		Rien
*/
void ft_lstiter(t_list *lst, void (*f)(void *))
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
	f(lst->content) va permettre par exemple d'appeler la fonction f 
	qui peut etre par exemple ft_toupper qui vq du coup transformer les min 
	en maj dans chque maillon de la liste 
*/