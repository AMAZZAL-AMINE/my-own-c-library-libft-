/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:29:17 by mamazzal          #+#    #+#             */
/*   Updated: 2022/09/30 09:29:20 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			index;

	str1 = dst;
	str2 = (unsigned char *)src;
	index = 0;
	if (!n)
		return (str1);
	else if (!dst && !src)
		return (dst);
	while (n--)
	{
		str1[index] = str2[index];
		index++;
	}
	return (str1);
}
