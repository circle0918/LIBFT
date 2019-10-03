#include "libft.h"

char *ft_strdup(const char *src)
{
    char *new;
    size_t l;

    l = ft_strlen(src) + 1;
    new = malloc(l * sizeof(char));
    if (new == NULL)
        return (NULL);
    else
        return (ft_strcpy(new, src));
}