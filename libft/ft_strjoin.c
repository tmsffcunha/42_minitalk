/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfelguei <tfelguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:13:24 by tfelguei          #+#    #+#             */
/*   Updated: 2024/05/09 16:42:53 by tfelguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		x;

	if (!s1 || !s2)
		return (NULL);
	new = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!new)
		return (NULL);
	x = 0;
	i = -1;
	while (s1[++i])
		new[x++] = (char)s1[i];
	i = -1;
	while (s2[++i])
		new[x++] = (char)s2[i];
	new[x] = '\0';
	return (new);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*str = ft_strjoin("str\n", "ola");
// 	printf("%s\n", str);
// 	return (0);
// }
