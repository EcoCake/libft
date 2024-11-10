/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezoe <amezoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:04:24 by amezoe            #+#    #+#             */
/*   Updated: 2024/11/10 17:49:49 by amezoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int	stringlen;
	char	*result;
	int	resultlen;
	int	i;
	int	j;
	
	if(!s1)
		return(NULL);
	if(!set)
		return((char *) s1);
		
	stringlen = ft_strlen(s1);
	i = 0;
	
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;

	while(stringlen > i && ft_strchr(set, s1[stringlen - 1]))
		stringlen--;
	resultlen = stringlen - i;
	result = malloc((resultlen + 1) * sizeof(char));
	if (!result)
		return (NULL);
	j = 0;
	while (i < stringlen)
	result[j++] = s1[i++];
	result[j] = '\0';
	return (result);	
}

// int main(void)
// {
// char *s1 = "abcdef234456abcd";
// char *set = "abcdef";

// printf("%s", ft_strtrim(s1, set));
// return (0);
	
// }
