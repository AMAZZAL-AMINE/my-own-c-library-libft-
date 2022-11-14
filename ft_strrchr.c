/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:06:23 by mamazzal          #+#    #+#             */
/*   Updated: 2022/10/01 13:06:25 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		strsize;

	strsize = ft_strlen(str) - 1;
	if (!(char)c)
		return ((char *)&str[strsize + 1]);
	while (strsize >= 0)
	{
		if (str[strsize] == (char)c)
		{
			return ((char *)&str[strsize]);
		}
		strsize--;
	}
	return (0);
}
