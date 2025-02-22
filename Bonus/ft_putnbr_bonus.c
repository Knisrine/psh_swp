/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:30:14 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/21 19:13:24 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp_bonus.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(long nb)
{
	if (nb > 2147483647)
	{
		write(1, "ERROR", 5);
		return ;
	}
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb <= 9)
	{
		ft_putchar(nb + 48);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
