/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 14:54:59 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 14:55:01 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copy no more than N bytes of SRC to DEST, stopping when C is found.
   Return the position in DEST one byte past where C was copied, or
   NULL if C was not found in the first N bytes of SRC.  */

/*void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
     char *d;
     char *s;

    d = dst;
    s = ( char *)src;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
    while (n)
    {
        *d = *s;
        if ((unsigned char)*s == (unsigned char)c)
            return (char *)(d + 1);
        d++;
        s++;
        n--;
    }
    return (NULL);
}*/
void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	/*We start off this function the same way we did in our ft_memcpy function.
	 * We declare a size_t counter variable i that will be used to move through
	 * the index positions of our char casted strings and we will use this
	 * variable in comparison to our given size_t n. We also make two char
	 * pointer variables that we will place our casted dst and src parameters
	 * inside. We set i to 0 to start from the beginning index position and we
	 * place casted version of our parameters dst and src into their respective
	 * variables. We then move to our loop.*/
	size_t	i;
	 char	*dst2;
	 char	*src2;

	i = 0;
	dst2 = ( char *)dst;
	src2 = ( char *)src;
	/*While our variable counter i is less than the given n we will continue
	 * our loop. Inside we set index position i of src2 into index position i
	 * of dst2. If the casted src2 unsigned character at index position i is
	 * equal to the given c, that is also casted to an unsigned char, then we
	 * immediately return a char casted pointer to the index position after it 
	 * in our original given dst parameter. If we never come across c before i
	 * is no longer less than n we will return NULL.*/
	while (i < n)
	{
		dst2[i] = src2[i];
		if ((unsigned char)src2[i] == (unsigned char)c)
			return ((char *)dst + i + 1);
		i++;
	}
	return (NULL);
}

/*int main()
{
    char d[50] = "abcdefghijklmnopqrstuvwxyz";
    char m[50] = "string with\200inside !";
    char d1[50] = "abcdefghijklmnopqrstuvwxyz";
    char m1[50] = "string with\200inside !";
    memccpy(d, m, '\200', 21);
    ft_memccpy(d1, m1, '\200', 21);
    printf("s:%s\n", d);
    printf("m:%s\n", d1);
    return 0;
}*/
