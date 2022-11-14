/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 14:30:14 by mamazzal          #+#    #+#             */
/*   Updated: 2022/10/01 14:30:16 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*f_string;
	size_t			index;

	f_string = (unsigned char *)str;
	index = 0;
	while (index < n)
	{
		if (f_string[index] == (unsigned char)c)
		{
			return (&f_string[index]);
		}
		index++;
	}
	return (0);
}
