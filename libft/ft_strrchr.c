/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slanger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 15:59:59 by slanger           #+#    #+#             */
/*   Updated: 2015/12/07 16:00:07 by slanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	caract;
	int		i;

	caract = (char)c;
	i = ft_strlen((char *)s);
	while (i >= 0)
	{
		if (s[i] == caract)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
