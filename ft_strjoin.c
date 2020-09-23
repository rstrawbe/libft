/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstrawbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 01:19:01 by rstrawbe          #+#    #+#             */
/*   Updated: 2020/05/23 23:15:20 by rstrawbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	char	*new;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	str1 = (char *)s1;
	str2 = (char *)s2;
	len = ft_strlen(s1) + ft_strlen(s2);
	if ((new = malloc(len + 1)))
	{
		while (*str1)
			*new++ = *str1++;
		while (*str2)
			*new++ = *str2++;
		*new = 0;
		return (&new[-len]);
	}
	return (new);
}
