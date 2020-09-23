/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstrawbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 05:18:03 by rstrawbe          #+#    #+#             */
/*   Updated: 2020/06/04 18:24:29 by rstrawbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		word_cnt(char *str, char c, int i)
{
	size_t	cnt;
	int		j;

	cnt = 1;
	j = 0;
	while (str[j] && j < i)
	{
		if (str[j] == c && str[j + 1] != c)
			cnt++;
		j++;
	}
	return (cnt);
}

static void			arr_free(char **arr, int i)
{
	while (i > -1)
		free(arr[i--]);
	free(arr);
}

static int			word_add(char *str, char **s, size_t cnt, int i)
{
	if (!(s[i] = (char *)malloc(sizeof(char) * cnt + 1)))
	{
		arr_free(s, i - 1);
		return (1);
	}
	ft_strlcpy(s[i], str, cnt + 1);
	return (0);
}

char				**ft_split(char const *s, char c)
{
	char	*str;
	char	**array;
	size_t	cnt;
	int		len;
	int		i;

	if (!s)
		return (NULL);
	str = (char *)s;
	len = ft_strlen(str) + 1;
	cnt = word_cnt(str, c, len);
	if (!(array = (char **)ft_calloc(sizeof(char *), (cnt + 1))) || !(len - 1))
		return (array);
	i = 0;
	cnt = 0;
	while (*str)
	{
		while (++cnt && *str && *str != c)
			str++;
		if (--cnt && (cnt = word_add(str - cnt, array, cnt, i++)))
			return (NULL);
		if (*str)
			str++;
	}
	return (array);
}
