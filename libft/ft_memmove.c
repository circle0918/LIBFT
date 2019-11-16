/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 14:56:20 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 14:56:22 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copies len bytes from string src to string
 * dst. The two strings may overlap; the copy is always done in a non
 * destructive manner. The ft_memmove function returns the original value of
 * dst.*/

void *ft_memmove(void *dst, const void *src, size_t len)
{
  unsigned char *d;
  unsigned char *s;
  size_t l;

  d = dst;
  s = (unsigned char *)src;
  l = len;
  if (dst == NULL && src == NULL)
    return (NULL);
  while (l)
  {
    // printf("%s",d);
    *d = *s;
    l--;
    d++;
    s++;
    //  printf("%zd\n",l);
  }
  return (dst);
}

//int main(int ac, char **av)
//{
  /*  printf("22%s  44%s\n",av[2],av[4]);
    memmove(av[1],av[2],2);
    ft_memmove(av[3],av[4],2);
    printf("hanshu dst %s   src %s\n",av[1],av[2]);
    printf("wodeaa dst %s   src %s\n",av[3],av[4]);*/
  //printf("%s", ft_memmove(((void *)0), ((void *)0), 5));
  //return 0;
//}
