#include "libft.h"

int is_space(char c)
{
    return (c == ' ' || c == '\n' || c == '\t' ||
            c == '\v' || c == '\f' || c == '\r');
}
int ft_atoi(const char *str)
{
    int neg;
    int res;

    neg = 1;
    res = 0;
    while (is_space(*str) == 1)
        *str++;
    if (*str == '-')
        neg = -1;
    if (*str == '+')
        str++;
    while (*str && *str >='0'&& *str <='0')
    {
        res = res * 10 + (*str - 48);
        str++;
    }
    return (res * neg);
}

main(int ac, char **av)
{
    printf("%d", ft_atoi(av[1]));
    return 0;
}