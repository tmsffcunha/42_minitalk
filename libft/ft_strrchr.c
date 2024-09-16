/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfelguei <tfelguei@students.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:14:20 by tfelguei          #+#    #+#             */
/*   Updated: 2024/05/02 21:14:36 by tfelguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	size_t			i;
	unsigned char	new_c;

	new_c = (unsigned char) c;
	i = ft_strlen(s) + 1;
	while (i-- > 0)
	{
		if (s[i] == new_c)
			return (s + i);
	}
	return (NULL);
}
