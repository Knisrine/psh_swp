/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_lnkdlst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:57:03 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/25 11:52:13 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

static void	one_sign(char *str, t_list **stack)
{
	if (ft_strlen(str) == 1 && ft_issign(*str))
	{
		write(2, "Error\n", 6);
		ft_lstclear(stack);
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
			one_sign(str[j], stack_a);
			ft_addback(stack_a, ft_lstnew(ft_atoi(str[j])));
			free(str[j]);
			j++;
		}
		free(str);
		i++;
	}
}
