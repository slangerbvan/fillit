/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slanger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 13:54:35 by slanger           #+#    #+#             */
/*   Updated: 2015/12/07 13:54:43 by slanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *memory;

	memory = (char *)malloc(sizeof(char) * size);
	if (memory != NULL)
	{
		ft_bzero(memory, size);
		return ((void *)memory);
	}
	return (NULL);
}
