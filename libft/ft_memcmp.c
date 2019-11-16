/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 14:55:43 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 14:55:47 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char *ss1;
    char *ss2;
    size_t i;

    ss1 = (char *)s1;
    ss2 = (char *)s2;
    i = n;
    if (i == 0)
        return (0);
    while (*ss1 == *ss2 && i)
    {
        ss1++;
        ss2++;
        i--;
    }
    return (*ss1 - *ss2);
}

int main(int ac, char **av)
{
  	char *s1 = "\xff\xaa\xde\x12";
	char *s2 = "\xff\xaa\xde\x12MACOSAAAAA";
	size_t size = 3;
	int i1 = memcmp(s1, s2, size);
	int i2 = ft_memcmp(s1, s2, size);
    printf("%d\n",i1);
    printf("%d",i2);
    return 0;
}
