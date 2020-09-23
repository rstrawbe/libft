/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstrawbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 01:52:16 by rstrawbe          #+#    #+#             */
/*   Updated: 2020/05/23 23:36:15 by rstrawbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*new;
	size_t	len;

	if (!s1)
		return (NULL);
	start = (char *)s1;
	while (*start && ft_strchr(set, *start))
		start++;
	end = start;
	while (*end)
		end++;
	if (start < end)
		end -= 1;
	while (*end && ft_strchr(set, *end))
		end--;
	len = end - start + 1;
	if (!(new = malloc(len + 1)))
		return (NULL);
	while (end - start > -1)
		*new++ = *start++;
	*new = 0;
	return (&new[-len]);
}
