/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 14:59:08 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 14:59:10 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Écrit La chaine de caractères s sur le file
 * descriptor donné*/

void ft_putstr_fd(char *s, int fd)
{
    write(fd, s, ft_strlen(s));
}
