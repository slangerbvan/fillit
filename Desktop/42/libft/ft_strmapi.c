/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slanger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 14:11:49 by slanger           #+#    #+#             */
/*   Updated: 2015/12/07 16:16:49 by slanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = ft_strlen(s);
	str = ft_strnew(i);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = s[i];
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}
