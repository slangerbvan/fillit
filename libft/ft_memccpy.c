/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slanger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 13:58:21 by slanger           #+#    #+#             */
/*   Updated: 2015/12/07 13:58:25 by slanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*tmp2;
	unsigned char	caract;
	size_t			i;

	i = 0;
	caract = c;
	tmp = (unsigned char *)dst;
	tmp2 = (unsigned char *)src;
	if (dst == NULL || src == NULL)
		return (NULL);
	while (i < n)
	{
		tmp[i] = tmp2[i];
		if (tmp2[i] == caract)
		{
			return (&tmp[i + 1]);
		}
		i++;
	}
	return (NULL);
}
