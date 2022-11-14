/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:05:35 by mamazzal          #+#    #+#             */
/*   Updated: 2022/10/01 15:05:37 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t nbr)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			count;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	count = 0;
	if (nbr == 0)
	{
		return (0);
	}
	while ((str1[count] == str2[count]) && count < nbr - 1)
	{
		count++;
	}
	return (str1[count] - str2[count]);
}
