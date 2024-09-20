/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfelguei <tfelguei.students.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:51:11 by tfelguei          #+#    #+#             */
/*   Updated: 2024/09/20 19:35:30 by tfelguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

size_t	usleep_dynamic(size_t n)
{
	size_t	i;

	i = 0;
	if (n <= 10000)
		i = 10;
	else if (n <= 30000)
		i = 100;
	else if (n <= 60000)
		i = 300;
	else if (n <= 100000)
		i = 500;
	else if (n <= 1000000)
		i = 10000;
	return (i);
}

void	sig_send(int pid, char *str)
{
	int		bit;
	size_t	i;
	size_t	usleep_i;

	usleep_i = 0;
	i = 0;
	while (i <= ft_strlen(str))
	{
		bit = 0;
		while (bit < 8)
		{
			if ((str[i] >> bit) & 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep_i = usleep_dynamic(i);
			usleep(usleep_i);
			bit++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int pid;
	char *str;

	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		str = argv[2];
		sig_send(pid, str);
	}
	else
	{
		ft_printf("wrong number of arguments \n");
		ft_printf("ex.:\n ./client PID string");
	}
}