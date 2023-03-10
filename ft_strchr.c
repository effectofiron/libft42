/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldemir <seldemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:24:10 by seldemir          #+#    #+#             */
/*   Updated: 2023/01/11 21:45:31 by seldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*a;

	a = (char *)s;
	while (*a != '\0')
	{
		if (*a == (char)c)
			return (a);
		a++;
	}
	if (*a == (char)c)
		return (a);
	return (NULL);
}
