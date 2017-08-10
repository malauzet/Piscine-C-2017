/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malauzet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 14:32:03 by malauzet          #+#    #+#             */
/*   Updated: 2017/08/09 18:45:01 by malauzet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int		i;

	i = 0;
	if (nb == 0 || nb == 1)
		return (nb);
	if (nb >= 2)
	{
		while (nb / 2 > i && i * i != nb)
		{
			i++;
			if (i * i == nb)
				return (i);
		}
		return (0);
	}
	return (0);
}

int		main(void)
{
	int		r;

	r = ft_sqrt(6);
	printf("%d", r);
}
