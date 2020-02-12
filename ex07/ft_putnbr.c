/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 21:24:33 by skang             #+#    #+#             */
/*   Updated: 2020/02/12 13:36:47 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int num)
{
	num = num + '0';
	write(1, &num, 1);
}

void	ft_devide(int nb)
{
	if (nb > 9)
	{
		ft_devide(nb / 10);
		ft_write(nb % 10);
	}
	if (nb <= 9 && nb > 0)
		ft_write(nb);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		ft_devide(nb);
	}
	else
		ft_devide(nb);
}
