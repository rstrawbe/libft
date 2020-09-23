/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstrawbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 13:52:52 by rstrawbe          #+#    #+#             */
/*   Updated: 2020/05/13 14:11:35 by rstrawbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	struct s_list	*list;

	if (!(list = (struct s_list*)malloc(sizeof(struct s_list))))
		return (NULL);
	list->content = content;
	list->next = (0);
	return (list);
}
