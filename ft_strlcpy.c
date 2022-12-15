/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldemir <seldemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:44:18 by seldemir          #+#    #+#             */
/*   Updated: 2022/12/15 15:34:55 by seldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{ 
    size_t i;
    size_t len;

    i = 0;
    if (!dst || !src)
        return(0);
    len = ft_strlen((char *)src);
    if (!dstsize)
        return (len);
    while (src[i] != '\0' && i < dstsize)
    {
        dst[i] = src[i];
        i++;
    }
    if (dstsize < len)
        dst[dstsize - 1] = '\0';
    else if (dstsize != 0)
        dst[i] = '\0';
    return (len);
}
