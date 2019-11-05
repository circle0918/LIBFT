#include "libft.h"

int ft_islower(int c)
{
    int t;

    t = 'a';
    while (t <= 'z')
    {
        if (t == c)
            return (1);
        t++;
    }
    return (0);
}

int ft_isupper(int c)
{
    int t;

    t = 'A';
    while (t <= 'Z')
    {
        if (t == c)
            return (1);
        t++;
    }
    return (0);
}
int ft_isalpha(int c)
{
    if (ft_isupper(c) == 1 || ft_islower(c) == 1)
        return (1);
    else
        return (0);
}