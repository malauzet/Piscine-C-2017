/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malauzet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 19:05:33 by malauzet          #+#    #+#             */
/*   Updated: 2017/08/09 23:14:43 by malauzet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_find_next_prime(int nb)
{
	int		i;

	i = 1;
	if (nb <= 2)
		return (2);
	while (i < (nb - 1))
	{
		i++;
		if (nb % i == 0)
		{
			nb++;
		}
		return (nb);
	}
	return (nb);
}

int		main(void)
{
	int		r;

	r = ft_find_next_prime(6);
	printf("%d", r);
}
