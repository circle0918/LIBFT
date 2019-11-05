#include "libft.h"

int ft_tolower(int c)
{
    if (ft_isupper(c) == 1)
    {
        c += 32;
    }
    return (c);
}

int main()
{
    printf("%c",ft_tolower('c'));
    return 0;
}