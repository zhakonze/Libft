/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhakonze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 09:51:15 by zhakonze          #+#    #+#             */
/*   Updated: 2017/05/25 09:57:41 by zhakonze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)// Function converts an upper case char to its corresponding
{					 // lower case if at all  it has one.
	if (c >= 'A' && c <= 'Z')// the if statement will check through the string
		return (c + 32);	 // for any upper case letter and convert it to lower
	return (c);				// if not an upper case char, the char remains 
}							// unchanged.

// we take an int as a argument so its easy to do basic addition, as we know a 
// computer does underneath the hood store characters as numbers --> man ascii.