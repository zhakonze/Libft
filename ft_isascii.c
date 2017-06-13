/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhakonze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 10:37:54 by zhakonze          #+#    #+#             */
/*   Updated: 2017/05/25 10:43:10 by zhakonze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)// the if statement checks if the character entered
		return (1); // does appear as a vaule on the Decimal ascii table, if yes it
	else			// returns 1 if not the code stops and returns a 0.
		return (0);
}
// we take an int as a argument because as we know a 
// computer does underneath the hood store characters as numbers --> man ascii.