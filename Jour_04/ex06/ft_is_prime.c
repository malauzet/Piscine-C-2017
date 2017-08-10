/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malauzet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:55:58 by malauzet          #+#    #+#             */
/*   Updated: 2017/08/09 19:37:36 by malauzet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int		i;

	i = 1;
	if (nb == 2)
		return (1);
	if (nb > 2)
	{
		while (i < (nb - 1))
		{
			i++;
			if (nb % i == 0)
				return (0);
		}
		return (1);
	}
	return (0);
}

int		main(void)
{
	int		r;

	r = ft_is_prime(2);
	printf("%d", r);
}
