/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.paris.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 04:07:06 by sben-tay          #+#    #+#             */
/*   Updated: 2023/11/18 00:51:59 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_putnbr(int n, int fd)
{
	long int	nb;

	nb = (long int)n;
	if (nb == -2147483648)
	{
		ft_putchar_fd ('-', fd);
		ft_putchar_fd ('2', fd);
		nb = 147483648;
	}
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar_fd (nb + 48, fd);
	}
	if (nb < 0)
	{
		write(fd, "-", 1);
		ft_putnbr (nb * (-1), fd);
	}
	if (nb >= 10)
	{
		ft_putnbr (nb / 10, fd);
		ft_putnbr (nb % 10, fd);
	}
	return (0);
}

void	ft_putnbr_fd(int n, int fd)
{
	ft_putnbr (n, fd);
}

// int main ()
// {
// 	ft_putnbr_fd(-2147483648, 2);
// }	