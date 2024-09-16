/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfelguei <tfelguei.students.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:42:52 by tfelguei          #+#    #+#             */
/*   Updated: 2024/05/21 17:27:26 by tfelguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		n = n * (-1);
		i++;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*x;
	long	n_new;

	n_new = n;
	i = count(n);
	x = malloc((i + 1) * sizeof(char));
	if (x)
	{
		x[i] = '\0';
		if (n_new < 0)
		{
			x[0] = '-';
			n_new *= -1;
		}
		else if (n_new == 0)
			x[0] = '0';
		while (n_new != 0)
		{
			x[--i] = (n_new % 10) + '0';
			n_new /= 10;
		}
	}
	return (x);
}
