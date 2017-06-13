/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhakonze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 10:00:10 by zhakonze          #+#    #+#             */
/*   Updated: 2017/06/09 14:15:39 by zhakonze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char			*str;
	unsigned int	i;
	size_t			len;

	if (!s)
		return ("");
	i = 0;
	len = ft_strlen(s) - 1;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	if (s[i] == '\0')
		return ("");
	while (s[len] && (s[len] == ' ' || s[len] == '\n' || s[len] == '\t'))
		len--;
	len++;
	str = (char *)ft_memalloc((len - i) + 1);
	if (str)
		str = ft_strsub(s, i, len - i);
	return (str);
}
