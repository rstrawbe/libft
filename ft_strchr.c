/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstrawbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 11:39:02 by rstrawbe          #+#    #+#             */
/*   Updated: 2020/05/07 15:09:55 by rstrawbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*pt;

	pt = (char *)s;
	while (*pt)
	{
		if (*pt == (char)c)
			return (pt);
		pt++;
	}
	if (c == 0)
		return (pt);
	return (NULL);
}
