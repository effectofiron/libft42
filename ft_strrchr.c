/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldemir <seldemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:02:26 by seldemir          #+#    #+#             */
/*   Updated: 2022/12/15 15:30:47 by seldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    int i;
    char *a;

    i = 0;
    a = NULL;
    while(s[i] != '\0')
    {
        if (s[i] == (char)c)
            a = ((char *)&s[i]);
        i++;
    }
    if (s[i] == (char)c)
        a = ((char *)&s[i]);
    return(a);
}

/*int main()
{
   const char s[] = "selsadsil";
    printf("%s", ft_strrchr(s, 's'));
}