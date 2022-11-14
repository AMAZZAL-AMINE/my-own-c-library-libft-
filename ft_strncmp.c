/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:11:27 by mamazzal          #+#    #+#             */
/*   Updated: 2022/09/29 17:11:29 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t max)
{
	size_t			count;
	unsigned char	*s1;
	unsigned char	*s2;

	count = 0;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while ((s1[count] != '\0' || s2[count] != '\0') && count < max)
	{
		if (s1[count] > s2[count])
		{
			return (1);
		}
		else if (s1[count] < s2[count])
		{
			return (-1);
		}
		count++;
	}
	return (0);
}
