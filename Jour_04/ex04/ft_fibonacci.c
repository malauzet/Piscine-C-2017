/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malauzet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 13:12:15 by malauzet          #+#    #+#             */
/*   Updated: 2017/08/09 14:31:01 by malauzet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	if (index > 0)
	{
		index = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (index);
}

int		main(void)
{
	int		r;

	r = ft_fibonacci(1);
	printf("%d", r);
}
