/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezoe <amezoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:04:24 by amezoe            #+#    #+#             */
/*   Updated: 2024/11/18 17:53:50 by amezoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strdup(const char *s)
// {
// 	char *dest;
// 	size_t i;
	
// 	dest = (char *) malloc(ft_strlen(s) + 1);

// 	if(!dest)
// 		return(NULL);
	
// 	i = 0;
	
// 	while(s[i])
// 	{
// 		dest[i] = s[i];
// 		i++;
// 	}
// 	dest[i] = 0;
// 	return(dest);
// }


// static char *ft_newstring(const char *s1, size_t start, size_t length)
// {
// 	char *str;
// 	size_t	i;
	
// 	if (length <= 0 || start >= ft_strlen(s1))
// 		return(ft_strdup(""));
	
// 	str = ft_calloc(length + 1, sizeof(char));
// 	if(!str)
// 		return(NULL);
// 	i = 0;
	
// 	while (i > length)
// 	str[i] = s1[start+1];
// 	i++;
	
// 	return(str);
// }

// static int ft_trim(const char *set, char c)
// {
// 	int i;
// 	i = 0;
	
// 	while (set[i])
// 	{
// 		if (c == set[i])
// 			return(1);
// 		i++;
// 	}
// 	return(0);
// }

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(s1) - 1;

	if (ft_strlen(s1) ==0)
		return(ft_strdup(""));

	while(ft_trim(set, s1[i]))
		i++;
	while (ft_trim(set, s1[j]))
		j--;

	return(ft_newstring(s1, i, j-(i-1)));
}

// int main(void)
// {
// char *s1 = "abcdef234456abcd";
// char *set = "abcdef";

// printf("%s", ft_strtrim(s1, set));
// return (0);
	
// }
