/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:01:06 by mamazzal          #+#    #+#             */
/*   Updated: 2022/10/01 12:01:13 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	c;
	size_t	k;

	c = 0;
	i = 0;
	while (i < dstsize && dst[c])
	{
		c++;
		i++;
	}
	if (i == dstsize)
		return (c + ft_strlen(src));
	k = 0;
	while (src[k])
	{
		if (k < dstsize - c - 1)
			dst[i++] = src[k];
		k++;
	}
	dst[i++] = '\0';
	return (c + k);
}
