/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezoe <amezoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:00:23 by amezoe            #+#    #+#             */
/*   Updated: 2024/11/24 16:47:50 by amezoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countwords(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
			i++;
		else if (str[i] == c || str[i] == '\0')
		{
			count++;
			i++;
		}
	}
	return (count);
}

char	*cpystr(char *tab, const char *s, int *j, int i)
{
	int	k;

	k = 0;
	while (*j < i)
	{
		tab[k] = s[*j];
		*j = *j + 1;
		k++;
	}
	tab[k] = '\0';
	return (tab);
}

char	**assign_strings(char **tab, const char *s, char c)
{
	int	i;
	int	j;
	int	mover;

	i = 0;
	j = 0;
	mover = 0;
	while (s[i])
	{
		if (s[i] == c || s[i] == '\0')
		{
			tab[mover] = malloc(sizeof(char) * (i - j) + 1);
			if (!tab[mover])
				return (NULL);
			if (s[j] == c)
				j++;
			tab[mover] = cpystr(tab[mover], s, &j, i);
			mover++;
		}
		i++;
	}
	tab[mover] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	tab = malloc(sizeof(char *) * countwords(s, c) + 1);
	if (!tab)
		return (NULL);
	return (assign_strings(tab, s, c));
}

int main(void)
{
 char  **tab;
 int  i;

 tab = ft_split("yeet,dasd ,hsdf adadadada, ", ',');
 i = 0;
 while (tab[i])
 {
  printf("%s\n", tab[i]);
  i++;
 }
 return (0);
}
