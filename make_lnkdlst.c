/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_lnkdlst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:57:03 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/20 20:32:39 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

void	check_limit_int(char **str, int j)
{
	if (ft_atoi(str[j]) > 2147483647 || ft_atoi(str[j]) < -2147483648
		|| (ft_strlen(str[j]) == 1 && ft_issign(*str[j])))
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
			check_limit_int(&str[j], j);
			ft_addback(stack_a, ft_lstnew(ft_atoi(str[j])));
			free(str[j]);
			j++;
		}
		free(str);
		i++;
	}
}
