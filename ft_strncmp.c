/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstrawbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 19:20:25 by rstrawbe          #+#    #+#             */
/*   Updated: 2020/05/07 14:46:34 by rstrawbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*c1;
	char	*c2;

	c1 = (char *)s1;
	c2 = (char *)s2;
    if (!c1 && !c2)
        return (0);
	if (!n || (!c1 && !c2))
		return (0);
	while (--n && *c1 && *c2 && *c1 == *c2)
	{
		c1++;
		c2++;
	}
	return (*c1 - *c2);
}
