#include "libft.h"

int ft_is_space(char c)
{
    return (c == ' ' || c == '\n' || c == '\t' ||
            c == '\v' || c == '\f' || c == '\r');
}