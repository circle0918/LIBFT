/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 14:56:35 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 14:56:38 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function is a copy of the memset function in the string.h library.
 * According to the man the memset function writes len bytes of value c
 * (converted to an unsigned char) to the string b. This function returns it's
 * first argument.*/

void *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    char *tmp;

    i = 0;
    tmp = b;
    while (i < len)
    {
        *(tmp + i) = c;
        i++;
    }
    return (b);
}

/*#include <stdio.h>
#include <assert.h>
int main(void)
{
    char str[100] = "hell";
    char str1[16] = "hell";
    void *b = str;
    void *b1 = str1;
    char *t = ft_memset(b, 98, 6);
    char *m = memset(b1, 97, 6);
    //  assert(strcmp(t,m)==0);
    //   ft_memset(b,97,5);
    printf("%p\n", str);
    printf("%p\n", str1);
    printf("m%s\n", m);
    printf("t%s\n", t);
    return 0;
}*/
