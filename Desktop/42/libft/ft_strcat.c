/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slanger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 14:06:14 by slanger           #+#    #+#             */
/*   Updated: 2015/12/07 14:06:36 by slanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*str;
	char	*str2;

	str = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	j = 0;
	while (str[i])
		i++;
	while (str2[j] != '\0')
	{
		str[i] = str2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
