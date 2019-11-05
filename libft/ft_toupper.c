#include "libft.h"

int ft_toupper(int c)
{
    if (ft_islower(c) == 1)
    {
        c -= 32;
    }
    return (c);
}

int main()
{
    printf("%c",ft_toupper('0'));
    return 0;
}