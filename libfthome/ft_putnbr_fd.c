/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 14:57:31 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 14:57:33 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Écrit l’integer n sur le file descriptor donné.*/

void		ft_putnbr_fd(int n, int fd)
{
	unsigned int nb;

	if (n < 0)
	{
		ft_putchar_fd('-',fd);
		nb = n * (-1);
	}
    else
    nb = n;
	if (nb > 9)
		ft_putnbr_fd((nb / 10),fd);
	ft_putchar_fd(((nb % 10) + '0'),fd);
}
