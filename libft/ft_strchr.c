/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slanger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 14:05:55 by slanger           #+#    #+#             */
/*   Updated: 2015/12/07 14:06:03 by slanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = ft_strlen((char *)s);
	if ((char)c == 0)
		return ((char *)(&(s[i])));
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(&(s[i])));
		i++;
	}
	return (NULL);
}
