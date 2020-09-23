/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstrawbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 17:06:07 by rstrawbe          #+#    #+#             */
/*   Updated: 2020/05/30 20:57:28 by rstrawbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*src;
	char	*sub;
	size_t	i;
	size_t	n;

	if (!s)
		return (NULL);
	n = ft_strlen(s);
	if (n < start)
		return (ft_strdup(""));
	n = n - start;
	if (n < len)
		len = n;
	src = (char *)s;
	if ((sub = malloc(len + 1)))
	{
		i = 0;
		while (i < len)
			sub[i++] = src[start++];
		sub[i] = '\0';
	}
	return (sub);
}
