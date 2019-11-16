/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 14:57:03 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 14:57:06 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Écrit le caractère c sur le file descriptor donné,
 * our desired file descriptor so we use 1 since we will be writing 1 byte.*/

/*void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}*/

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
