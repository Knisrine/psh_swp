/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:46:36 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/22 22:14:17 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

int	only_space(char *s)
{
	int	i;

	i = 0;
	while(s[i])
	{
		if(!ft_isspace(s[i]))
			return (0);
		i++;
	}
	return (1);
}
void	check_error(int ac, char **argmnt, int i)
{
	int	j;
	int	flag;

	while (i < ac)
	{
		j = 0;
		flag = 0;
		if(only_space(argmnt[i]))
		{
			write(1, "Error\n", 6);
			exit(1);
		}
		while(ft_issign(argmnt[i][j]))
		{
			flag++;
			j++;
		}
		while (argmnt[i][j])
		{
			if ((!ft_isspace(argmnt[i][j])))
			{
				if (flag > 1 || (!ft_isdigit(argmnt[i][j])
					|| ft_issign(argmnt[i][j])))
				{
					write(1, "Error\n", 6);
					exit(1);
				}
			}
			else
				flag = 0;
			j++;
		}
		i++;
	}
}
