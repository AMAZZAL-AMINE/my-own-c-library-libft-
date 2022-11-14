/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:51:26 by mamazzal          #+#    #+#             */
/*   Updated: 2022/10/02 11:51:28 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *strfind, size_t maxLen)
{
	size_t	count;
	size_t	ken_count;

	count = 0;
	if (!maxLen && !str)
	{
		return (0);
	}
	if (strfind[0] == '\0')
	{
		return ((char *)str);
	}
	while (str[count] && count < maxLen)
	{
		ken_count = 0;
		while (str[count + ken_count] == strfind[ken_count]
			&& count + ken_count < maxLen)
		{
			if (strfind[ken_count + 1] == '\0')
				return ((char *)&str[count]);
			ken_count++;
		}
		count++;
	}
	return (0);
}
