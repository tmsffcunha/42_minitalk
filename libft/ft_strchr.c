/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfelguei <tfelguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:36:47 by tfelguei          #+#    #+#             */
/*   Updated: 2024/05/09 16:42:43 by tfelguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	unsigned char	new_c;

	new_c = (unsigned char)c;
	while (*s)
	{
		if (*s == new_c)
			return (s);
		s++;
	}
	if (*s == new_c)
		return (s);
	return (NULL);
}
