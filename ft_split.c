/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 08:18:59 by mamazzal          #+#    #+#             */
/*   Updated: 2022/10/05 08:19:01 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char const *str, size_t max)
{
	size_t	index;
	char	*dst;

	index = 0;
	dst = malloc(sizeof(char) * (max + 1));
	if (!dst)
	{
		return (0);
	}
	while (str[index] && index < max)
	{
		dst[index] = str[index];
		index++;
	}
	dst[index] = '\0';
	return (dst);
}

size_t	ft_filter_str(char const *str, char crt)
{
	size_t	index;
	size_t	word_count;

	index = 0;
	word_count = 0;
	while (str[index])
	{
		if ((index == 0 && str[index] != crt)
			|| (str[index] == crt && str[index + 1] && str[index + 1] != crt))
		{
			word_count++;
		}
		index++;
	}
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	char	**strlist;
	size_t	rslt;
	size_t	count;
	size_t	str_count;

	count = 0;
	str_count = 0;
	if (!s)
		return (0);
	strlist = malloc(sizeof(char *) * (ft_filter_str(s, c) + 1));
	if (!strlist)
		return (0);
	while (count < ft_filter_str(s, c) && s[str_count])
	{
		while (s[str_count] == c)
			str_count++;
		rslt = str_count;
		while (s[str_count] != c && s[str_count] != '\0')
			str_count++;
		strlist[count] = ft_strndup(&s[rslt], str_count - rslt);
		count++;
	}
	strlist[count] = 0;
	return (strlist);
}
