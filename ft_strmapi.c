/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstrawbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 17:50:59 by rstrawbe          #+#    #+#             */
/*   Updated: 2020/05/23 23:39:40 by rstrawbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	char	*new;
	size_t	cnt;
	size_t	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	str = (char *)s;
	cnt = ft_strlen(s) + 1;
	if ((new = malloc(cnt)))
	{
		new[--cnt] = 0;
		while (i < cnt)
		{
			new[i] = f(i, str[i]);
			i++;
		}
	}
	return (new);
}
