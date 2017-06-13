/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhakonze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 10:10:23 by zhakonze          #+#    #+#             */
/*   Updated: 2017/06/01 17:06:19 by zhakonze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')// in this while loop we don't increament i as that was 
	{					  // already done in the above while loop, so all we have 
		dest[i + j] = src[j];// to do now is just join the other string...by 
		j++;				//increamenting the counter for source.
	}
	dest[i + j] = '\0';
	return (dest);
}
