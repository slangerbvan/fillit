/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slanger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 13:58:41 by slanger           #+#    #+#             */
/*   Updated: 2015/12/07 13:58:47 by slanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *str_dst;
	char *str_src;

	str_dst = (char *)dst;
	str_src = (char *)src;
	while (n--)
	{
		*str_dst++ = *str_src++;
	}
	return (dst);
}
