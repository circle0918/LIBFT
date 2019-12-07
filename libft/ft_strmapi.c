/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:03:28 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 15:03:30 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Renew string s,  pass to f function the specific index of our character in the given string.*/

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *src;
    unsigned int i;
    size_t len;
    char *new;

    if (!s || !f)
        return (NULL);
    src = (char *)s;
    i = 0;
    len = ft_strlen(src) + 1;
    if (!(new = (char *)malloc(len * sizeof(char))))
        return (NULL);
    while (src[i])
    {
        new[i] = f(i, src[i]);
        i++;
    }
    new[i] = '\0';
    return (new);
}
