/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:02:59 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 15:03:01 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t ft_strlcpy(char *dst, const char *src, size_t dsize)
// {
// 	const char *osrc = src;
// 	size_t nleft = dsize;

// 	/* Copy as many bytes as will fit. */
// 	if (nleft != 0) {
// 		while (--nleft != 0) {
// 			if ((*dst++ = *src++) == '\0')
// 				break;
// 		}
// 	}

// 	/* Not enough room in dst, add NUL and traverse rest of src. */
// 	if (nleft == 0) {
// 		if (dsize != 0)
// 			*dst = '\0';		/* NUL-terminate dst */
// 		while (*src++)
// 			;
// 	}

// 	return(src - osrc - 1);	/* count does not include NUL */
// }

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t srclen;

    srclen = ft_strlen(src);
    if (size == 0)
        return (srclen);
    if (srclen < size - 1)
        ft_memcpy(dst, src, srclen + 1);
    else
    {
        ft_memcpy(dst, src, size - 1);
        dst[size - 1] = '\0';
    }
    return (srclen);
}

/*int main ()
{
    // char d[]="AAAAAAAAA";
    // char *s="BBBB";
   char d1[]="AAAAAAAAA";
   char *s1="BBBB";
    // printf("%s$\n%lu\n",d, strlcpy(d,s,10));
  printf("%s$\n%lu\n",d1, ft_strlcpy(d1,s1,13));
    return 0;
}*/
