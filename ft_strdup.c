/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldemir <seldemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:12:31 by seldemir          #+#    #+#             */
/*   Updated: 2022/12/19 15:26:15 by seldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
    char *as;
    int a;

    a = ft_strlen((char *)s1) + 1;
    as = ft_calloc(a, sizeof(char));
    if (!as)
        return (0);
    ft_strlcpy(as, s1, a);
    return (as);
}
