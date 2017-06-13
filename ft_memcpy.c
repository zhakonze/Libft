/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhakonze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 15:24:40 by zhakonze          #+#    #+#             */
/*   Updated: 2017/06/03 14:04:37 by zhakonze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*sour;

	i = 0;
	dest = (unsigned char *)dst;
	sour = (unsigned char *)src;
	if (n == 0 || dest == sour)
		return (dest);
	while (sour[i] && i < n)
	{
		dest[i] = sour[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// this function is just the same as ft_strcpy, only that we have to type cast the void
// arguments.