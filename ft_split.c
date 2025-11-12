/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:12:30 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/12 13:51:23 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
		Diviser une string en plusieurs array selon un separateur c 
	RETURN
		Un tableau de nouvelles string resultant de la divison,
		NULL si l allocation echoue.
*/

#include "libft.h"

static char	*ft_add_str(char const *str, size_t start, size_t end)
{
	size_t	i;
	char	*word;

	i = 0;
	word = ft_calloc((end - start + 1), sizeof(char *));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

static void	*ft_free(char **array, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

static char	**ft_spliting(char **array, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	start = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			start = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			array[j] = ft_add_str(s, start, i);
			if (!array[j])
				return (ft_free(array, j));
			j++;
		}
	}
	array[j] = NULL;
	return (array);
}

static size_t	ft_count_word(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;

	i = 0;
	if (!s || !c)
		return (NULL);
	array = ft-calloc((ft_count_word(s, c) + 1), sizeof(char *));
	if (!array)
		return (NULL);
	array = ft_spliting(array, s, c);
	return (array);
}

/*
	ligne 30 :
	word = ft_calloc((end - start + 1)), sizeof(char*);
 	evite de mettre > word[i] = '\0';
	appelle la fonction calloc et evite l overflow.
 
	EXEMPLE
		char *str = "Hello world 42Libft";
		char **tab = ft_split(str, ' ');

		for (int i = 0; tab[i]; i++)
   		printf("%s\n", tab[i]);
	
	RESULTAT
		Hello
		world
		42Libft

	EXPLICATION
		La fonction coupe str a chaque ' '
		Les mots consecutifs sont stockes dans un tableau
		Le tableau se termine par NULL	

	*/	