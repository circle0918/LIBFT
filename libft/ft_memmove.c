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
  if (d <= s)
  {
    while (l--)
      *d++ = *s++;
  }
  else
  {
    while (l--)
    {
      *(d + l) = *(s + l);
    }
  }
  return (dst);
}

// int main(int ac, char **av)
// {
//   char dest []= "lorem ipsum dolor sit amet";
//   char dest1 []= "lorem ipsum dolor sit amet";

//   char src [] = "con\0sec\0\0te\0tur";
//   char src1 [] = "con\0sec\0\0te\0tur";

// memmove(dest,src,10);
// ft_memmove(dest1,src1,10);
//   	write(1, dest, 22);
// 	write(1, "\n", 1);
// 	write(1, dest1, 22);
//   	write(1, "\n", 1);

//     	write(1, src, 22);
// 	write(1, "\n", 1);
// 	write(1, src1, 22);
//     // printf("%s\n",memmove(dest, "con\0sec\0\0te\0tur", 10));
//     // printf("%s\n",ft_memmove(dest1, "con\0sec\0\0te\0tur", 10));
// return 0;
// }
