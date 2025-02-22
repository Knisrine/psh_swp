/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_lnkdlst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:57:03 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/22 00:24:04 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

void	check_limit_int(char *str)
{
	if (ft_atoi(str) > 2147483647 || ft_atoi(str) < -2147483648
		|| (ft_strlen(str) == 1 && ft_issign(*str)))
	{
		write(1, "Error\n", 6);
		free(str);
		exit(1);
	}
}

void	make_lnkdlst(int ac, char **av, t_list **stack_a)
{
	char	**str;
	int		i;
	int		j;

	i = 1;
	while (i < ac)
	{
		str = ft_split(av[i], ' ');
		j = 0;
		while (str[j])
		{
			check_limit_int(str[j]);
			ft_addback(stack_a, ft_lstnew(ft_atoi(str[j])));
			free(str[j]);
			j++;
		}
		free(str);
		i++;
	}
}
