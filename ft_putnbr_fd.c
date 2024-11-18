/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezoe <amezoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:08:55 by amezoe            #+#    #+#             */
/*   Updated: 2024/11/18 19:40:51 by amezoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	long numb;
	
	numb = n;
	if (numb < 0)
		{
			write(fd, "-", 1);
			numb *= -1;
		}
		if (numb > 9)
		{
			ft_putnbr_fd(numb / 10, fd);
			ft_putchar_fd((numb % 10) + '0', fd);
		}
		else
			ft_putchar_fd(numb + '0', fd);
}