/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:51:07 by mamazzal          #+#    #+#             */
/*   Updated: 2022/09/29 18:51:09 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *m, int alph, size_t length)
{
	unsigned char	*str;
	size_t			count;

	str = m;
	count = 0;
	while (count < length)
	{
		str[count] = alph;
		count++;
	}
	return (str);
}
