/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldemir <seldemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 16:51:26 by seldemir          #+#    #+#             */
/*   Updated: 2022/12/12 14:51:51 by seldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    char *str;

    i = 0;
    str = (char *)b;
    while (i < len)
    {
        str[i] = c;
        i++;
    }
    return (b);
}