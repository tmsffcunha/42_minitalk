/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfelguei <tfelguei.students.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:51:21 by tfelguei          #+#    #+#             */
/*   Updated: 2024/05/21 17:29:37 by tfelguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	char			*ptrs;
	unsigned int	len_s;
	unsigned int	size;

	if (s)
	{
		len_s = ft_strlen((char *)s);
		size = len_s - start;
		if (len_s <= start)
		{
			len = 0;
			start = len_s;
		}
		if (len > size)
			len = size;
		str = (char *) malloc(len * sizeof(char) + 1);
		if (str)
		{
			ptrs = (char *) s + start;
			ft_strlcpy(str, ptrs, len + 1);
			return (str);
		}
	}
	return (NULL);
}
