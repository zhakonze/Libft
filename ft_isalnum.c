/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhakonze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 10:46:03 by zhakonze          #+#    #+#             */
/*   Updated: 2017/06/01 12:27:05 by zhakonze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))// the if statements just checks if the value
		return (1);// entered is a digit('0' - '9') or alpha ('a\A' - 'z\Z'), if yes
	else			// it return 1, else it returns a 0.
		return (0);
}
// we take an int as a argument because as we know a 
// computer does underneath the hood store characters as numbers --> man ascii.