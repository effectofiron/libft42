/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldemir <seldemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 10:28:21 by seldemir          #+#    #+#             */
/*   Updated: 2022/12/12 14:51:41 by seldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t i;
    char *str;

    i = 0;
    str = (char *)s;
    while(i <= n)
    {
        str[i] = '0';
        i++;
    }
}