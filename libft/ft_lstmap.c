/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfelguei <tfelguei.students.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 18:01:58 by tfelguei          #+#    #+#             */
/*   Updated: 2024/05/22 21:34:19 by tfelguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*new_con;
	t_list	*new_node;
	t_list	*new_lst;

	new_lst = (NULL);
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		new_con = f(lst->content);
		new_node = ft_lstnew(new_con);
		if (!new_node || !new_con)
		{
			ft_lstclear(&new_lst, del);
			del(new_con);
			free(new_node);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
