/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 00:37:01 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/11 13:54:33 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	DESCIRPTION
		Prends le maillon en parametre et libere son contenu
		a l'aide de la ft 'del'. liberer le maillon mais pas
		le maillon suivant.  free
	RETURN
		Rien
*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// #include <stdio.h>

// void	del(void *content)
// {
// 	printf("Suppression du contenu : %s\n", (char *)content);
// 	free(content);
// }
// int	main(void)
// {
// 	t_list	*list;
// 	char	*content;

// 	/* On duplique une chaîne pour la mettre dans le maillon */
// 	content = ft_strdup("Je suis le premier maillon");
// 	if (!content)
// 		return (1);
// 	/* On crée un nouveau maillon */
// 	list = ft_lstnew(content);
// 	if (!list)
// 		return (1);
// 	printf("Avant suppression : %s\n", (char *)list->content);
// 	/* On supprime le maillon avec ft_lstdelone */
// 	ft_lstdelone(list, del);
// 	printf("Maillon supprimé avec succès ✅\n");
// 	return (0);
// }