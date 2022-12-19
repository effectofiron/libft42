/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldemir <seldemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:55:16 by seldemir          #+#    #+#             */
/*   Updated: 2022/12/19 15:11:24 by seldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
    char *a;
    char *b;

    a = (char *)dst;
    b = (char *)src;

    if (dst == src)
        return(dst);
    if (b < a)
    {
        while (len--)
            *(a + len) = *(b + len);
        return(dst);
    }
    while (len--)
        *a++ = *b++;
    return(dst);
}