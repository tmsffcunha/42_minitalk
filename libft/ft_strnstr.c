/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfelguei <tfelguei@students.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:14:02 by tfelguei          #+#    #+#             */
/*   Updated: 2024/05/02 21:14:06 by tfelguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	unsigned int	index;
	size_t			i;
	size_t			x;

	i = 0;
	if (!*to_find)
		return ((char *) str);
	while (*str && i++ <= len)
	{
		if (*str == *to_find)
		{
			index = 0;
			x = i;
			while (to_find[index] && x <= len
				&& str[index] == to_find[index])
			{
				x++;
				index++;
			}
			if (index == ft_strlen(to_find))
				return ((char *) str);
		}
		str++;
	}
	return (NULL);
}
