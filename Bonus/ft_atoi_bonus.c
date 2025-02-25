/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:46:49 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/25 11:48:14 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp_bonus.h"

static void	check_limit_int(long result, char *s)
{
	if (result > 2147483647 || result < -2147483648)
	{
		write(2, "Error\n", 6);
		free(s);
		exit(1);
	}
}

long	ft_atoi(char *str)
{
	long	result;
	int		i;
	int		sign;

	if (!str)
		return (0);
	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		check_limit_int((result * sign), str);
		i++;
	}
	return (result * sign);
}
