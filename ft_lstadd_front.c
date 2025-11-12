/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 21:40:08 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/11 18:54:31 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	DESCRIPTION
		Cette fonction nous permet d'ajouter un nouvel élément à l'avant 
		d'une liste existante.
	RETURN
		Rien	
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
		t_list *head = [A];  // head pointe vers le premier élément
		t_list *new = [X];   // nouveau nœud

		lst  ---->  head
		*lst ---->  [A] -> [B] -> [C]
		new  ---->  [X] -> NULL

23  	new -> [X] -> [A] -> [B] -> [C]

		le suivant de new devient le pointeur de lst donc A.
		on modifie le pointeur passe en argument
		donc le pointeur de tete 'head' pointe vers X

24		*lst (head) -> [X] -> [A] -> [B] -> [C] -> NULL
		les pointeur de lst devient new donc lst pointera vers X et plus vers A
*/