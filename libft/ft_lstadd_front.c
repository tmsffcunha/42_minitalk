/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfelguei <tfelguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:54:54 by tfelguei          #+#    #+#             */
/*   Updated: 2024/05/09 16:42:57 by tfelguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
	return ;
}
/*
int	main(int ac, char **av)
{
	int i = 1;
	(void)ac;
	t_list *old;
	old = ft_lstnew(av[i]);
	t_list *new;
	new = ft_lstnew(av[2]);
	ft_lstadd_front(&old, new);
	while(new)
	{
		printf("%s\n", (char *)new->content);
		new = new->next;
	}
	return (0);
}*/
