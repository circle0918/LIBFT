#include "libft.h"

int ft_isdigit(int c)
{
    int t;

    t = '0';
    while (t <= '9')
    {
        if (t == c)
            return (1);
        t++;
    }
    return (0);
}

/*int main(void)
{
    printf("%d\n",ft_isdigit('6'));
    printf("%d",isdigit('6'));
    return 0;
}*/