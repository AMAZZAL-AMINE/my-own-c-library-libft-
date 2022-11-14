/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:17:17 by mamazzal          #+#    #+#             */
/*   Updated: 2022/10/01 17:17:19 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*place;
	unsigned char	*str;

	place = (unsigned char *)dst;
	str = (unsigned char *)src;
	if (!dst && !str)
		return (0);
	if (dst > src)
	{
		while (len--)
		{
			place[len] = str[len];
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (place);
}

int main() {
	char src[] = "hello world";
	printf("%lu \n%lu",src,src+3);
}
