/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfelguei <tfelguei.students.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:25:26 by tfelguei          #+#    #+#             */
/*   Updated: 2024/05/08 19:26:39 by tfelguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	char_s;

	str = (unsigned char *) s;
	char_s = (unsigned char) c;
	if (n > 0)
	{
		while (n-- > 0)
		{
			if (*str == char_s)
				return (str);
			str++;
		}
	}
	return ((void *) 0);
}
