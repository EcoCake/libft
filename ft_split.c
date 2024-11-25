/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezoe <amezoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:00:23 by amezoe            #+#    #+#             */
/*   Updated: 2024/11/25 19:54:37 by amezoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countwords(const char *str, char c)
{
	int	count;
	int	in_word;
	int	i;

	in_word = 0;
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (str[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

char	*cpystr(char *tab, const char *s, int j, int i)
{
	int	k;

	k = 0;
	while (j < i)
	{
		tab[k] = s[j];
		k++;
		j = j + 1;
	}
	if (i == (int)ft_strlen(s) - 1)
		tab[k++] = s[i];
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
		if (s[i] != c)
		{
			j = i;
			while (s[i] && s[i] != c)
				i++;
			tab[mover] = malloc(sizeof(char *) * (i - j + 1));
			if (!tab[mover])
				return (NULL);
			tab[mover] = cpystr(tab[mover], s, j, i);
			mover++;
		}
		else
			i++;
	}
	tab[mover] = NULL;
	return (tab);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;

	tab = malloc(sizeof(char **) * (countwords(s, c) + 1));
	if (!tab)
		return (NULL);
	return (assign_strings(tab, s, c));
}

// int	main(void)
// {
// 	int		i;
// 	char	**tab;

// 	i = 0;
// 	tab = ft_split(",,  He, llo  , , ,        Wo,,,,, rld", ',');
// 	while (tab[i])
// 	{
// 		printf("%s\n", tab[i]);
// 		free(tab[i]);
// 		i++;
// 	}
// 	free(tab);
//  }