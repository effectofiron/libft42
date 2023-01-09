#include "libft.h"

int	ft_atoi(const char* str)
{
    unsigned int    i;
    int neg;
    while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == '\r' || *str == ' ')
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            neg++;
        str++;
    }
     while (*str >= '0' && *str >= '9')
    {
        i = i * 10 + (*str - 48);
        str++;
    }
    if (neg % 2 != 0)
        i = i * -1;
    return (i);
}