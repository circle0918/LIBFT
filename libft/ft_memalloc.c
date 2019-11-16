/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 14:54:42 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 14:54:44 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memalloc(size_t size)
{
    unsigned char *new;

    new = (void *)malloc(sizeof(size_t) * size);
    if (new == NULL)
        return NULL;
    while (size)
    {
        new[size] = 0;
        size--;
    }
    return ((void *)new);
}

/*int main(void)
{
    size_t i = 6;
    void *p = ft_memalloc(i);

    while (i > 0)
    {
        printf("%p\n", (p + i - 1));
        i--;
    }
    // ft_memalloc(i);
    // printf("%p", ft_memalloc(i));
    return 0;
}*/
