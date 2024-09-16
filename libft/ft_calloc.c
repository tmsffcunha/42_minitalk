/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfelguei <tfelguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:37:29 by tfelguei          #+#    #+#             */
/*   Updated: 2024/05/09 16:41:58 by tfelguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void			*ptr;
	unsigned char	*zero;
	size_t			i;

	i = nitems * size;
	ptr = (void *)malloc(nitems * size);
	if (!ptr)
		return (NULL);
	zero = (unsigned char *)ptr;
	while (i--)
	{
		*zero++ = 0;
	}
	return (ptr);
}
