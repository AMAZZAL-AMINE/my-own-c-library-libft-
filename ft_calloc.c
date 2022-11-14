/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 13:03:13 by mamazzal          #+#    #+#             */
/*   Updated: 2022/10/06 19:01:48 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*sr;

	if (count == SIZE_MAX || size == SIZE_MAX)
	{
		return (0);
	}
	sr = malloc(count * size);
	if (!sr)
	{
		return (0);
	}
	ft_bzero(sr, count * size);
	return (sr);
}
