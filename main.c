/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-chec <fde-chec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:16:21 by fde-chec          #+#    #+#             */
/*   Updated: 2025/11/10 21:21:32 by fde-chec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"
 #include <stdio.h>

 int main(void)
 {
	//ATOI
  	// printf("%d\n", ft_atoi("-++123"));
	// printf("%d\n", atoi("-++123"));
	
	//BZERO
	// printf("%s\n", ft_bzero("coucou", 5);
	// printf("%s", bzero("coucou", 5);

	//ISALPHA
	// printf("%d\n", ft_isalpha('c'));
	// printf("%d", isalpha('c'));

	//ISALNUM
	// printf("%d\n", ft_isalnum('2'));
	// printf("%d", isalnum('2'));

	//ISASCII
	// printf("%d\n", ft_isascii('c'));
	// printf("%d", isascii('c'));

	///ISDIGIT
	// printf("%d\n", ft_isdigit('2'));
	// printf("%d", isdigit('2'));
	
	//ISPRINT
	// printf("%d\n", ft_isprint(' '));
	// printf("%d", ft_isprint(' '));
	
	//ITOA
	// int	n = 0;
	// printf("avant : %d\n", n);
	// printf("apres : %s", ft_itoa(n));

	//LSTNEW
	// char *str = "Hello";
    // t_list *new = ft_lstnew(str);

    // printf("content : %s\n", str);
    // printf("next : %p\n", new);

    // free(new);

	//
	// printf("%s\n", (char*)ft_memchr("pikachu", 'a', 4));
	// printf("%s\n", (char*)memchr("pikachu", 'a', 4));
	
	//STRMAPI
// char my_func(unsigned int i, char c)
// {
// 	(void) i;
//     if (c >= 'a' && c <= 'z')
//         return (c - 32);
//     return c;
// }
// int main()
// {
//      char *str = "hello world";
		// char	*result;
// 		ft_strmapi(str, my_func)); 
		// printf("%s", result);
		// free(result);
//     	return 0;
// }
	
	//MEMCHR
	// char s1[] = "paco";
	// char *res = ft_memchr(s1, 'c', 10);
	// printf("ft_memchr : %s\n", res);
	// char *res2 = memchr(s1, 'c', 10);
	// printf("memchr : %s\n", res2);

	//MEMCMP
	// char s1[12] = "pacp ";
	// char s2[12] = "paco";
	// int res = ft_memcmp(s1, s2, 10);
	// printf("ft_memcmp: %d\n", res);
	// int res2 =memcmp(s1, s2, 10);
	// printf("memcmp: %d\n", res2);

	//MEMCPY
	// char s1[12] = "paco ";
	// char s2[] = "sushi";
	// ft_memcpy(s1, s2, 10);
	// printf("ft_memcpy : %s\n", s1);
	// memcpy(s1, s2, 10);
	// printf("memcpy: %s\n", s1);

	//MEMMOVE
	// char s1[] = "";
	// char s2[] = "";
	// ft_memmove(s1, s2 , 10);
	// printf("ft_memmove : %s\n", s1);
	// memmove(NULL, s2, 5);
	// printf("memmove : %s\n", s2);

	//MEMSET
	// char s1[] = "chouchou loulou";
	// ft_memset(s1, 'c', 10);
	// printf("ft_memset : %s\n", s1);
	// memset(s2, 'c', 10);
	// printf("memset    : %s\n", s2);

	//SUBSTR
	// printf("%s\n", ft_substr("Hello world", 2, 4));
	
	//STRCHR
	// printf("%s\n", ft_strchr("abcd", 'b'));
	// printf("%s", strchr("abcd", 'b'));

	//STRDUP
	// printf("%s\n", ft_strdup("techno"));
	// printf("%s", strdup("techno"));

	//STRLCAT
	// char dest1[20] = "maman";
	// printf("ft_strlcat : %zu\n", ft_strlcat(dest1, "papa", 9));
	// printf("ft_strlcat : %zu\n", strlcat(dest1, "papa", 9));

	//STRLEN
	// printf("ft_strlen  : %zu\n", ft_strlen("bonjour"));
	// printf("ft_strlen  : %zu\n", strlen("bonjour"));
	
	//STRMCMP
	// printf("%d\n", ft_strncmp ("sushi", "salem", 10));
	// printf("%d", strncmp ("sushi", "salem", 10));
	
	//STRNSTR
	// printf("%s\n", ft_strnstr("salut", "lu", 20));
	// printf("%s", fstrnstr("salut", "lu", 20));

	//STRTRIM
	// char *s1 = "lalalamoulagblalala";
	// char *set = "la";
	// printf("%s", ft_strtrim(s1, set));

	//STRRCHR
	//printf("%s\n", ft_strrchr("hellolo", 'l'));
	// printf("%s", strrchr("hellolo", 'l'));

	//STRJOIN
	// const char s1[] = "123";
	// const char s2[] = "GFEGDG";
	// printf("%s", ft_strjoin(s1, NULL));

	//SPLIT
	// char *str = "  lol hello   bonjour ciao    ";
	// char c = ' ';
	// char **tab = ft_split(str, c);
	// while (*tab)
	// {	
	// 		printf("%s\n", *tab);
	// 		tab++;
	// }
	// pour tester dans la ft:	 printf("index 1[%c]:%zu, %zu\n", s[i+1], i, res);

	//TOLOWER
	// printf("%c\n", ft_tolower('A'));
	// printf("%c", tolower('A'));

	//TOUPPER
	// printf("%c\n", ft_toupper('a'));
	// printf("%c", ft_toupper('a'));
	


	return (0);

}

