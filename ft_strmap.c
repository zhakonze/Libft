/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhakonze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 13:36:25 by zhakonze          #+#    #+#             */
/*   Updated: 2017/06/09 16:36:08 by zhakonze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	if (s)
	{
		while (s[i])
		{
			str[i] = f((char)s[i]);
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
