/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malauzet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 14:50:23 by malauzet          #+#    #+#             */
/*   Updated: 2017/08/14 13:47:38 by malauzet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		exclu(char *str, int n)
{
	while (str[n] < 33 && str[n] != 127)
	{
		n++;
	}
	return (n);
}

int		ft_atoi(char *str)
{
	int		n;
	int		neg;
	int		nbr;

	n = 0;
	neg = 1;
	nbr = 0;
	n = exclu(str, n);
	if (str[n] == '-')
		neg = -1;
	if (str[n] == '-' || str[n] == '+')
		n++;
	if (str[n] >= 48 && str[n] <= 57)
	{
		while (str[n] >= 48 && str[n] <= 57)
		{
			nbr = nbr * 10;
			nbr = nbr + (str[n] - 48);
			n++;
		}
	}
	return (nbr * neg);
}
