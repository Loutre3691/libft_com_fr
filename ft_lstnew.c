/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 23:22:36 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/10 12:38:34 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	DESCRIPTION
		cette fonction alloue de la memoire pour un nouvel element de type
		t_list,  Il prend un «contenu» de pointeur nul et y définit le contenu 
		de la liste t_list. Le pointeur t_list sur “Next” est défini sur null. 
		C’est ainsi que nous créons des « nœuds » pour notre liste liée.

	RETURN
		un pointeur du new node
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
