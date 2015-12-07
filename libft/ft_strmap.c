/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slanger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 14:11:35 by slanger           #+#    #+#             */
/*   Updated: 2015/12/07 16:14:02 by slanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;
	int		j;

	if (!s || !f)
		return (NULL);
	i = ft_strlen(s);
	j = i;
	str = ft_strnew(i);
	if (!str)
		return (NULL);
	while (i--)
		*str++ = f(*s++);
	return (str - j);
}
