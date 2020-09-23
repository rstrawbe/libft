/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstrawbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 13:39:09 by rstrawbe          #+#    #+#             */
/*   Updated: 2020/06/04 22:53:10 by rstrawbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*str;
	char	*need;
	size_t	cnt;

	str = (char *)big;
	if (!*little)
		return (str);
	need = (char *)little;
	cnt = ft_strlen(little);
	while (*str && len-- >= cnt)
	{
		if (*str == *need && ft_memcmp(str, need, cnt) == 0)
			return (str);
		str++;
	}
	return (NULL);
}
