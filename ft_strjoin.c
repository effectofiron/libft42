/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldemir <seldemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:07:06 by seldemir          #+#    #+#             */
/*   Updated: 2023/01/11 20:15:28 by seldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		in;
	int		i2;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	ptr = malloc(sizeof (char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ptr)
		return (NULL);
	in = 0;
	i2 = 0;
	while (s1[in])
		ptr[i2++] = s1[in++];
	in = 0;
	while (s2[in])
		ptr[i2++] = s2[in++];
	ptr[i2] = '\0';
	return (ptr);
}
