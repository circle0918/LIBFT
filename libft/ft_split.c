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

/*char **ft_split(char const *s, char c)
{
    unsigned int i;
    int cntr;

    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i] != '\0')
            cntr++;
        while (s[i] && (s[i] != c))
            i++;
    }
    printf("%d", cntr);
    //return (cntr);
}*/

int main(int ac, char **av)
{
    count_words(av[1], *av[2]);
    return 0;
}