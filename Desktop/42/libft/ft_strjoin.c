/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slanger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 14:10:44 by slanger           #+#    #+#             */
/*   Updated: 2015/12/07 16:17:47 by slanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	i = (ft_strlen(s1)) + (ft_strlen(s2) + 1);
	str = ft_strnew(i);
	if (!str)
		return (NULL);
	if (!ft_strcat(str, s1))
		return (NULL);
	if (!ft_strcat(str, s2))
		return (NULL);
	return (str);
}
