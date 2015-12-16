/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slanger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 14:07:18 by slanger           #+#    #+#             */
/*   Updated: 2015/12/07 16:20:57 by slanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		counter(int b)
{
	int index;

	index = 0;
	while (b > 0)
	{
		b = b / 10;
		index++;
	}
	return (index);
}

static	void			if_neg(t_itoalist *var, int *c)
{
	var->i = counter(-(*c));
	var->i += 1;
	var->k = 1	;
	*c = -(*c);
}

static	void			max_neg(int *c, t_itoalist *var)
{
	*c = *c + 1;
	var->j = 1;
}

static	void			test(int *c, t_itoalist *var)
{
	if (*c < 0 && *c == (-2147483648))
		max_neg(c, var);
	if (*c < 0)
		if_neg(var, c);
	else
		var->i = counter(*c);
}

char			*ft_itoa(int c)
{
	t_itoalist var;

	test(&c, &var);
	var.copyi = var.i;
	var.str = (char *)malloc(sizeof(char) * var.i + 1);
	if (!var.str)
		return (NULL);
	var.i = var.i - 1;
	if (c == 0)
	{
		var.str[0] = '0';
		var.copyi++;
	}
	while (c > 0)
	{
		var.str[var.i] = (c % 10) + '0';
		c = c / 10;
		var.i--;
	}
	if (var.k == 1)
		var.str[var.i] = '-';
	if (var.j == 1)
		var.str[(var.copyi) - 1] += 1;
	var.str[(var.copyi)] = '\0';
	return (var.str);
}
