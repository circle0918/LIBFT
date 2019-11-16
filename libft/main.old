#include <string.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	unsigned int pos;
	unsigned int i;

	if (!*to_find)
		return ((char*)str);
	pos = 0;
	while (str[pos] != '\0' && (size_t)pos < len)
	{
		if (str[pos] == to_find[0])
		{
			i = 1;
			while (to_find[i] != '\0' && str[pos + i] == to_find[i] &&
					(size_t)(pos + i) < len)
				++i;
			if (to_find[i] == '\0')
				return ((char*)&str[pos]);
		}
		++pos;
	}
	return (0);
}
/*char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    if (*s2 == '\0' || n == 0)
        return (char *)(s1);
    while (*s1 && *s2)
    {
        if (ft_strncmp(s1, s2, n)==0)
        {
            return (char *)s1;
        }
        else
            s1++;
    }
    return NULL;
}*/
int main(int ac, char**av)
{
  char m[]="hello";
  char n[]="o";
  char *mn;
  mn=strnstr(m,n,5);
  printf("%s",mn);
    return 0;
}