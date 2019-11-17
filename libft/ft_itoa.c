/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 14:54:26 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 14:54:29 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// /*int count_size(int n)
// {
//     int count;

//     count = 0;

// }*/
char *ft_itoa(int n)
{
    int f;
    unsigned int nbr;
    unsigned int nb;
    int len;

    char *new;

    f = 0;
    len = 0;
    if(n==0)
    return (ft_strdup("0"));
    if (n < 0)
    {
        f = 1;
        nbr = n * (-1);
    }
    else
        nbr = n;
    nb = nbr;
    while (nbr)
    {
        nbr /= 10;
        len++;
    }
    int count = f + len + 1;
    new = (char *)malloc(count * sizeof(char));
    if (new == NULL)
        return (NULL);
    if (f == 1)
    {
        new[0] = '-';
    }
    while (nb)
    {
        new[count - 2] = nb % 10 + '0';
    //    printf("%d : %d : %s$\n", nb, count, new);
        count--;
        nb /= 10;
    }
    new[f + len] = '\0';
 //   printf("out : %s$\n", new);
    return (new);
}

// int main(void)
// {
//     char *new = ft_itoa(-0);
//     printf("%smm\n", new);
//     free(new);
//     return (0);
// }
