/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldemir <seldemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 10:54:24 by seldemir          #+#    #+#             */
/*   Updated: 2022/12/12 14:51:49 by seldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)

{
    char *dest1;
    const char *src1;

    if ((dst == src) || n == 0)
        return  (dst);
    if (!dst && !src)
        return (0);
    dest1 = (char *)dst;
    src1 = (const char *)src;
    while (n--)
    {
        dest1[n] = src1[n];
    }
    return (dst);
}