/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:01:23 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 15:01:26 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t res;
    
    i = 0;
    while (dest[i] != '\0')
        ++i;
    res = 0;
    while (src[res] != '\0')
        ++res;
    if (size <= i)
        res += size;
    else
        res += i;
    j = 0;
    while (src[j] != '\0' && i + 1 < size)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (res);
}
