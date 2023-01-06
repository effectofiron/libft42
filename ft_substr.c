#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char *ys;
    size_t j;

    if (!s || !(ys = (char *)malloc(len + 1)))
        return(0);
    j = 0;
    while(j < ft_strlen(s) && start < len)
        ys[j++] = s[start++];
    ys[j] = '\0';
    return (ys);
}

int main()
{
    char const s[] = "seldemir";
    printf("%s", ft_substr(s, 3, 6));
}