/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfelguei <tfelguei.students.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:07:06 by tfelguei          #+#    #+#             */
/*   Updated: 2024/09/20 18:23:44 by tfelguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

char	add_c(char *str, char c)
{
	int		i;
	char	*new_str;

	i = 0;
	if (!str)
	{
		str = malloc(sizeof(char));
		if (!str)
			return (0);
		str[0] = '\0';
	}
	i = ft_strlen(str);
	new_str = malloc(sizeof(char) * (i + 2));
	if (!new_str)
		return (0);
	i = 0;
	while (str[i])
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = c;
	new_str[i] = '\0';
	free(str);
	return (*new_str);
}

void	handle_signal(int signal)
{
	static int	c;
	static char	*str;
	static char	bit;

	if (signal == SIGUSR1)
		c = c | (1 << bit);
	bit++;
	if (bit == 8)
	{
		if (c == '\0')
		{
			ft_printf("%s\n", str);
			free(str);
			str = NULL;
		}
		else
			*str = add_c(str, c);
	}
}

int	main(void)
{
	int pid;

	pid = getpid();
	ft_printf("PID: %d\n", pid);
	while (1)
	{
		signal(SIGUSR1, handle_signal);
		signal(SIGUSR2, handle_signal);
	}
	return (0);
}