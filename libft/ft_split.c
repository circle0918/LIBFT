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
    {
        if (s[i] != c && s[i - 1] == c)
            count++;
    }
    return (count);
}

char **ft_split(char const *s, char c)
{
    char **new;
    int k;
    int j;
    int i;

    i = 0;
    k = 0;
    new = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
    if (new == NULL)
        return (NULL);
    while (s[i])
    {
        while (s[i] == c)
            i++;
        j = i;
        while (s[i] && s[i] != c)
            i++;
        if (i > j)
        {
            new[k] = ft_strndup(s + j, i - j);
            k++;
        }
    }
    new[k] = NULL;
    return (new);
}

/*int main(int ac, char**av)
{
    char **new = ft_split("hello",'e');
    printf("%s\n",new[0]);
    free(new);
    return 0;
}*/