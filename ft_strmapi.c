/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 09:53:58 by mamazzal          #+#    #+#             */
/*   Updated: 2022/10/04 09:54:00 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	count;
	char			*result;

	count = 0;
	if (s == NULL || f == NULL)
	{
		return (0);
	}
	result = malloc(ft_strlen(s)+ 1 * sizeof(char));
	if (!result)
		return (NULL);
	while (s[count])
	{
		result[count] = f(count, s[count]);
		count++;
	}
	result[count] = '\0';
	return (result);
}

char ft_st(unsigned int i, char c) {
	printf("%i %c\n", i, c);
	return 0;
}

int main() {
	char str[] = "potato potato";
	printf("%s", ft_strmapi(str, ft_st));
	return 0;
}
