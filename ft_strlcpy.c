/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstrawbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 22:30:40 by rstrawbe          #+#    #+#             */
/*   Updated: 2020/05/05 10:15:16 by rstrawbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	char	*s;
	size_t	count;

	count = 0;
	s = (char *)src;
	while (s[count])
		count++;
	if (siz)
	{
		while (--siz > 0 && *s)
			*dst++ = *s++;
		*dst = '\0';
	}
	return (count);
}
