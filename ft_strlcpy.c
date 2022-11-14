/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:54:10 by mamazzal          #+#    #+#             */
/*   Updated: 2022/09/30 17:54:13 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dist, const char *source, size_t dstsize)
{
	size_t	i;
	size_t	strleng;

	i = 0;
	strleng = ft_strlen((char *)source);
	if (dstsize > 0)
	{
		while (source[i] != '\0' && i < dstsize - 1)
		{
			dist[i] = source[i];
			i++;
		}
		dist[i] = '\0';
	}
	return (strleng);
}
