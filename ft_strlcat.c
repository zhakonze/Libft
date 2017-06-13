/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhakonze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 10:31:47 by zhakonze          #+#    #+#             */
/*   Updated: 2017/06/10 10:07:29 by zhakonze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const	char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	j = 0;
	size = n;
	while (dst[j] && size-- != 0)
		j++;
	size = n - j;
	if (size == 0)
		return (j + ft_strlen(src));
	while (src[i] != '\0')
	{
		if (size != 1)
		{
			dst[j + i] = src[i];
			size--;
		}
		i++;
	}
	dst[j + i] = '\0';
	return (j + i);
}
