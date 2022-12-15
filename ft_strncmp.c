/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldemir <seldemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:58:10 by seldemir          #+#    #+#             */
/*   Updated: 2022/12/15 15:31:33 by seldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (*s1, && *s2 && i < n)
    {
        if (*s1 != *s2)
            return(*(unsigned char *)s1 - *(unsigned char)s2);
        ++s1;
        ++s2;
        ++i;
    }
    if (n == i)
    {
        --s1;
        --s2;
    }
    return(*(unsigned char *)s1 - *(unsigned char)s2);
}

/*int main ()
{
    unsigned char s1[] = "bilgisayar";
    unsigned char s2[] = "bilgiler";
    printf("%d", ft_strncmp(s1, s2, 6));
    printf("%d", strncmp(s1, s2, 6));
}

farklıyı  bbulup ascii değerlerini çıkarır
