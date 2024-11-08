/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezoe <amezoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:43:28 by amezoe            #+#    #+#             */
/*   Updated: 2024/11/08 15:50:15 by amezoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char*s, int c)
{
	int	i;

	i = 0;
	
	while(s[i])
	i++;

	while (i >= 0)
		{
			if (s[i] == (char)c)
				return ((char *)(s + i));
			i--;
		}
	return (0);
}