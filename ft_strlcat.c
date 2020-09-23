/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstrawbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 17:40:56 by rstrawbe          #+#    #+#             */
/*   Updated: 2020/05/08 15:56:55 by rstrawbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*d;
	char	*s;
	size_t	dlen;

	d = (char *)dst;
	s = (char *)src;
	while (*d && size)
	{
		d++;
		size--;
	}
	dlen = d - dst;
	if (!size)
		return (dlen + ft_strlen(s));
	while (*s && --size)
		*d++ = *s++;
	while (*s)
		s++;
	*d = 0;
	return (dlen + (s - src));
}
