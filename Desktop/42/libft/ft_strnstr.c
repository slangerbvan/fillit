/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slanger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 15:59:37 by slanger           #+#    #+#             */
/*   Updated: 2015/12/07 15:59:44 by slanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	j;

	j = ft_strlen(s2);
	if (!*s2)
		return ((char *)s1);
	if (j > n)
		return (NULL);
	while (*s1 && j <= n--)
	{
		if (!(ft_memcmp(s1++, s2, j)))
			return ((char *)s1 - 1);
	}
	return (NULL);
}
