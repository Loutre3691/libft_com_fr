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
/**
 * @brief Crée un nouvel élément de liste chaînée.
 * 
 * Alloue un nouvel élément t_list avec le contenu spécifié.
 * 
 * @param content Contenu à stocker dans le nouvel élément
 * @return Pointeur sur le nouvel élément, NULL si l'allocation échoue
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

/*
ft_lstnew : crée un nouveau wagon (élément de liste).

Exemple étape par étape :

t_list *new = ft_lstnew("X");

- new->content = "X"
- new->next = NULL

Train après création :
new --> [X] -> NULL
*/
