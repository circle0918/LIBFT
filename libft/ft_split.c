#include "libft.h"

int count_words(char const *s, char c)
{
    int count;
    int i;

    i = 0;
    count = 0;
    if (s[i] != c)
        count++;
    while (s[++i] != '\0')
        if (s[i] != c && s[i - 1] == c)
            count++;
    //  printf("%d",count);
    return (count);
}

char **ft_split(char const *s, char c)
{
    char *new;
    int k;
    int j;

    new = malloc(count_words(s, c) * sizeof(char *));
    k = 0;
    if (s[0] != c)
        j = k;
    while (s[++k])
    {
        if (s[k] != c && s[k - 1] == c)
        
    }
}

int main(int ac, char **av)
{
    count_words(av[1], *av[2]);
    return 0;
}