/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:46:36 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/19 17:09:07 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

void	check_error(int ac, char **argmnt, int i)
{
	int	j;
	int	flag;

	while (i < ac)
	{
		j = 0;
		flag = 0;
		while (argmnt[i][j])
		{
			if (ft_issign(argmnt[i][j]))
				flag++;
			if (!ft_isspace(argmnt[i][j]))
			{
				if (flag > 1 || (!ft_isdigit(argmnt[i][j])
					&& !ft_issign(argmnt[i][j])))
				{
					write(1, "Error\n", 6);
					exit(1);
				}
			}
			j++;
		}
		i++;
	}
}
