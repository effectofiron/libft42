/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldemir <seldemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:07:34 by seldemir          #+#    #+#             */
/*   Updated: 2023/01/09 16:42:48 by seldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ys;
	size_t	j;

	if (!s || !(ys == (char *)malloc(len + 1)))
		return (0);
	j = 0;
	while (j < ft_strlen(s) && start < len)
		ys[j++] = s[start++];
	ys[j] = '\0';
	return (ys);
}
