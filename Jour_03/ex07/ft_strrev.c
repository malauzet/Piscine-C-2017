/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malauzet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 14:58:41 by malauzet          #+#    #+#             */
/*   Updated: 2017/08/07 18:33:22 by malauzet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

char	*ft_strrev(char *str)
{
	int		start;
	int		end;
	int		tempc;
	int		n;

	n = ft_strlen(str);
	start = 0;
	end = n - 1;
	while (start < end)
	{
		tempc = str[start];
		str[start] = str[end];
		str[end] = tempc;
		start++;
		end--;
	}
	return (str);
}
