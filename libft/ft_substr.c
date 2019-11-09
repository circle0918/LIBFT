#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *new;
    int i;

    i = 0;
    new = malloc((len + 1) * sizeof(char));
    if (new == NULL || s == NULL)
        return (NULL);
    if (ft_strlen(s) < start)
        return (ft_strdup(""));
    while (i < len)
    {
        new[i] = s[start];
        i++;
        start++;
    }
    new[len + 1] = '\0';
    return (new);
}

int main()
{
    char p[] = "hello";
    char *new = ft_substr(p, 0, 0);
    printf("%s", new);
    free(new);
    return 0;
}