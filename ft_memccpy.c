/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhakonze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 16:56:21 by zhakonze          #+#    #+#             */
/*   Updated: 2017/06/04 11:46:25 by zhakonze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*sour;
	unsigned char	a;

	i = 0;
	dest = (unsigned char *)dst;
	sour = (unsigned char *)src;
	a = (unsigned char)c;
	while (sour[i] && i < n)
	{
		dest[i] = sour[i];
		if (sour[i] == a)
			return ((unsigned char *)dest + i + 1);// (dest + i) is the same as dest[i];  
		i++;
	}		
	return (NULL);
}
