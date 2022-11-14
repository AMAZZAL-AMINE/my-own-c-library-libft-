/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:17:28 by mamazzal          #+#    #+#             */
/*   Updated: 2022/10/04 14:17:30 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	count;
	size_t	revcountlen;
	char	*dst;

	count = 0;
	if (s1[count] == '\0')
		return (ft_strdup("\0"));
	revcountlen = ft_strlen(s1);
	while (s1[count] && ft_strchr(set, s1[count]))
	{
		count++;
	}
	while (ft_strrchr(set, s1[revcountlen - 1]) && revcountlen > count)
	{
		revcountlen--;
	}
	dst = malloc(sizeof(char) * revcountlen - count + 1);
	if (dst != NULL)
		ft_strlcpy(dst, &s1[count], revcountlen - count + 1);
	return (dst);
}
