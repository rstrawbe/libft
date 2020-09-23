/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstrawbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 16:17:41 by rstrawbe          #+#    #+#             */
/*   Updated: 2020/05/08 17:06:54 by rstrawbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	char	*str;
	size_t	len;
	size_t	i;

	str = (char *)s;
	len = ft_strlen(s) + 1;
	if ((new = ft_calloc(len, 1)))
	{
		i = 0;
		while (i < len)
		{
			new[i] = str[i];
			i++;
		}
	}
	return (new);
}
