/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstrawbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 19:47:25 by rstrawbe          #+#    #+#             */
/*   Updated: 2020/05/16 16:45:25 by rstrawbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d_tmp;
	unsigned char	*s_tmp;

	d_tmp = (unsigned char *)dest;
	s_tmp = (unsigned char *)src;
	while (n--)
		*d_tmp++ = *s_tmp++;
	return (dest);
}
