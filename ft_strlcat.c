/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezoe <amezoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:43:44 by amezoe            #+#    #+#             */
/*   Updated: 2024/11/05 09:54:52 by amezoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	length_of_dest;
	size_t	length_total;
	const char	*s;

	if ((!dst || !src) && !size)
		return (0);
	s = src;
	length_of_dest = 0;
	while (*(dst + length_of_dest) && length_of_dest < size)
		length_of_dest++;
	if (length_of_dest < size)
		length_total = length_of_dest + ft_strlen(s);
	else
		return (size + ft_strlen(s));
		
}