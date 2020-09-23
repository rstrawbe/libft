/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstrawbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 17:03:42 by rstrawbe          #+#    #+#             */
/*   Updated: 2020/05/13 22:04:56 by rstrawbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*item;
	t_list	*tmp;

	if (!lst || !*lst)
		return ;
	item = *lst;
	while (item)
	{
		tmp = item->next;
		del(item->content);
		free(item);
		item = tmp;
	}
	*lst = 0;
}
