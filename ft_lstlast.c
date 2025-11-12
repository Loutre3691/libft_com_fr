/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 00:15:43 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/11 14:29:38 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	DESCIRPTION
		retourne le dernier maillon de la liste.
	RETURN
		le dernier maillon de la liste.
*/
t_list	*ft_lstlast(t_list *lst)
{
		// if (!lst)
		// return (NULL);
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}
// tant que lle suivant de lst existe
// lst devient le suivant de lst