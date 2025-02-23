/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:46:36 by nikhtib           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/02/23 13:01:54 by nikhtib          ###   ########.fr       */
=======
/*   Updated: 2025/02/22 22:14:17 by nikhtib          ###   ########.fr       */
>>>>>>> 11262a99bfd3cc3155e76255e82d821d67f9fb6e
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

int	only_space(char *s)
{
	int	i;

	i = 0;
<<<<<<< HEAD
	while (s[i])
	{
		if (!ft_isspace(s[i]))
=======
	while(s[i])
	{
		if(!ft_isspace(s[i]))
>>>>>>> 11262a99bfd3cc3155e76255e82d821d67f9fb6e
			return (0);
		i++;
	}
	return (1);
}
<<<<<<< HEAD

void	part2(int flag, char **argmnt, int i, int j)
{
	while (argmnt[i][j])
	{
		if ((!ft_isspace(argmnt[i][j])))
		{
			if (flag > 1 || (!ft_isdigit(argmnt[i][j])
				&& (!ft_issign(argmnt[i][j]) || !ft_isspace(argmnt[i][j - 1]))))
			{
				write(1, "Error\n", 6);
				exit(1);
			}
		}
		else
			flag = 0;
		j++;
	}
}

=======
>>>>>>> 11262a99bfd3cc3155e76255e82d821d67f9fb6e
void	check_error(int ac, char **argmnt, int i)
{
	int	j;
	int	flag;

	while (i < ac)
	{
		j = 0;
		flag = 0;
<<<<<<< HEAD
		if (only_space(argmnt[i]))
		{
			write(1, "Error\n", 6);
			exit(1);
		}
		while (ft_issign(argmnt[i][j]))
		{
			flag++;
=======
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
>>>>>>> 11262a99bfd3cc3155e76255e82d821d67f9fb6e
			j++;
		}
		part2(flag, argmnt, i, j);
		i++;
	}
}
