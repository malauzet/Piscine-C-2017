/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malauzet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 19:08:56 by malauzet          #+#    #+#             */
/*   Updated: 2017/08/09 11:35:06 by malauzet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int		n;

	n = nb;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (n > 1 && n <= 12)
	{
		nb = nb * (n - 1);
		n--;
	}
	return (nb);
}

int		main(void)
{
	int		res;

	res = ft_iterative_factorial(14);
	printf("%d", res);
}
