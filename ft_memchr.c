/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldemir <seldemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 21:33:57 by seldemir          #+#    #+#             */
/*   Updated: 2022/12/19 14:30:46 by seldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    char *string;

    if (s == NULL)
        return(NULL);
    i = 0;
    string = (void *)s;
    while (i < n)
    {
        if (string[i] == (char)c)
            return(&string[i]);
        i++;
    }
    return(NULL);
}
