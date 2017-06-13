/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhakonze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 09:29:50 by zhakonze          #+#    #+#             */
/*   Updated: 2017/05/25 09:47:32 by zhakonze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)// Function converts an lower case char to its corresponding
{					 // upper case if at all  it has one.
	if (c >= 'a' && c <= 'z')// the if statement will check through the string
		return (c - 32);// for any lower case letter and convert it to upper
	return (c);// if not an lower case char, the char remains 
}			   // unchanged.

// we take an int as a argument so its easy to do basic subtraction, as we know a 
// computer does underneath the hood store characters as numbers --> man ascii.