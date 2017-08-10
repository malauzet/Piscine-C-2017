/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malauzet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 22:42:26 by malauzet          #+#    #+#             */
/*   Updated: 2017/08/09 11:49:14 by malauzet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 1 && nb <= 12)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
	}
	return (nb);
}

int		main(void)
{
	int		res;

	res = ft_recursive_factorial(5);
	printf("%d", res);
}
