/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstrawbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 05:33:54 by rstrawbe          #+#    #+#             */
/*   Updated: 2020/05/23 23:32:42 by rstrawbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		cnt;
	int		n_copy;

	n_copy = n;
	cnt = 1;
	if (n < 0)
		cnt++;
	while ((n /= 10))
		cnt++;
	if ((str = (char *)malloc(cnt + 1)))
	{
		str[cnt] = 0;
		while (cnt--)
		{
			if (n_copy >= 0)
				str[cnt] = n_copy % 10 + 48;
			else
				str[cnt] = (n_copy % 10) * -1 + 48;
			n_copy /= 10;
		}
		if (str[1] && str[0] == 48)
			str[0] = '-';
	}
	return (str);
}
