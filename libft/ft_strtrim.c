/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slanger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 16:02:34 by slanger           #+#    #+#             */
/*   Updated: 2015/12/07 16:02:39 by slanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_spe_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	t_trimlist var;

	if (!s)
		return (NULL);
	var.len = ft_strlen(s);
	var.str = ft_strnew(var.len);
	var.i = 0;
	var.k = var.len;
	while (ft_spe_space(s[var.i]) == 1)
		(var.i)++;
	while (var.k != 0 && ft_spe_space(s[var.k - 1]) == 1)
		var.k--;
	var.len = 0;
	var.l = var.k - var.i;
	while (s[var.len] != '\0' && var.len < var.l)
	{
		var.str[var.len] = s[var.i];
		(var.i)++;
		(var.len)++;
	}
	var.str[var.len] = '\0';
	return (var.str);
}
