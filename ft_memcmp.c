/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldemir <seldemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:47:55 by seldemir          #+#    #+#             */
/*   Updated: 2022/12/15 15:31:33 by seldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
    while (n)
    {
        if(*(unsigned char *)s1 != *(unsigned char *)s2)
            return(*(unsigned char *)s1 - *(unsigned char *)s2);
            ++s1;
            ++s2;
    }
    return(0);
}

/*int main()
{
    unsigned char s1[] = "bilgisayar";
    unsigned char s2[] = "bilgiler";
    printf("%d", ft_memcmp(s1, s2, 6));
}