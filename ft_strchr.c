/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:51:35 by mamazzal          #+#    #+#             */
/*   Updated: 2022/10/01 12:51:37 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int				index;
	unsigned char	alph;
	char			*sr;

	sr = (char *)str;
	index = 0;
	alph = (unsigned char)c;
	while (sr[index] && sr[index] != alph)
	{
		index++;
	}
	if (sr[index] == (char)alph)
	{
		return ((char *)&sr[index]);
	}
	return (0);
}
