/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:11:06 by mamazzal          #+#    #+#             */
/*   Updated: 2022/10/03 16:11:07 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		count;
	int		dstcount;
	char	*distination;

	count = 0;
	dstcount = 0;
	if (!s1 && s2)
	{
		return (NULL);
	}
	distination = malloc(ft_strlen(s1) + (ft_strlen(s2) + 1));
	if (!distination)
		return (0);
	while (s1[count])
	{
		distination[dstcount++] = s1[count++];
	}
	count = 0;
	while (s2[count])
	{
		distination[dstcount++] = s2[count++];
	}
	distination[dstcount] = 0;
	return (distination);
}
