/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:53:40 by mamazzal          #+#    #+#             */
/*   Updated: 2022/10/03 18:55:00 by mamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	long	number;

	number = nbr;
	if (number == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (number < 0)
	{
		write(fd, "-", 1);
		number *= -1;
		ft_putnbr_fd(number, fd);
	}
	else if (number >= 10)
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putnbr_fd(number % 10, fd);
	}
	else
	{
		ft_putchar_fd(number + '0', fd);
	}
}
