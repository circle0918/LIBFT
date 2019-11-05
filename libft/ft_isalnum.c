#include "libft.h"

int ft_isalnum(int c)
{
    if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
        return (1);
    else
        return (0);
}

int main()
{
    printf("%d",ft_isalnum('-'));
    return 0;
}