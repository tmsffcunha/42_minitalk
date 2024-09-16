/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfelguei <tfelguei.students.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:35:21 by tfelguei          #+#    #+#             */
/*   Updated: 2024/09/11 15:35:22 by tfelguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int				count;
	char			hex[18];
	int				i;
	char			*base;
	unsigned long	n;

	if (!ptr)
		return (write(1, "(nil)", 5));
	count = 0;
	i = 0;
	n = (unsigned long)ptr;
	count += ft_putstr("0x");
	base = "0123456789abcdef";
	while (n > 0)
	{
		hex[i++] = base[n % 16];
		n /= 16;
	}
	while (i--)
		count += ft_putchar(hex[i]);
	return (count);
}