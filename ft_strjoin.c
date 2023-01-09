/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldemir <seldemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:07:06 by seldemir          #+#    #+#             */
/*   Updated: 2023/01/09 12:07:07 by seldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
    char *ys;
    int i;
    int j;

    if (!s1 || !s2 || !(ys = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) +1)))
        return (0);
    i = 0;
    while (s1[i] != '\0')
    {
        ys[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j] != '\0')
    {
        ys[i] = s2[j];
        i++;
        j++;
    }
    ys[i] = '\0';
    return (ys);
}