#include "libft.h"

int ft_isascii(int c)
{
    int t;
    t = 0;
    while (t <= 128)
    {
        if(t == c)
        return (1);
        t++;
    }
    return (0);
}