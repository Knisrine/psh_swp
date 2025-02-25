/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 00:05:38 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/24 23:16:59 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp_bonus.h"

int	check_sort(t_list **stack_a, t_list **stack_b)
{
	t_list	*head;

	if (!stack_a || !(*stack_a))
	{
		if (*stack_b)
			ft_lstclear(stack_b);
		exit(1);
	}
	head = *stack_a;
	while (head->next)
	{
		if (head->index > head->next->index)
			return (0);
		head = head->next;
	}
	ft_lstclear(stack_a);
	return (1);
}
