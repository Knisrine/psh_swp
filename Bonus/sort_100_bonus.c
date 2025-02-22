/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 20:21:33 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/21 22:42:57 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp_bonus.h"

static void	sort_100_part1(t_list **stack_a, t_list **stack_b)
{
	int	start;
	int	end;

	start = 0;
	end = 15;
	while (*stack_a)
	{
		if (((*stack_a)->index >= start) && ((*stack_a)->index < end))
		{
			push_b(stack_a, stack_b);
			start++;
			end++;
		}
		else if ((*stack_a)->index < start)
		{
			push_b(stack_a, stack_b);
			rb(&(*stack_b));
			start++;
			end++;
		}
		else
			ra(stack_a);
	}
}

void	sort_100(t_list **stack_a, t_list **stack_b)
{
	t_list	*biggest;
	int		position;

	sort_100_part1(stack_a, stack_b);
	while (*stack_b)
	{
		biggest = *stack_b;
		get_bgst(&biggest, *stack_b);
		position = get_position(*stack_b, biggest);
		if (position < (ft_lstsize(*stack_b) / 2))
		{
			if (biggest->index == (*stack_b)->index)
				push_a(stack_a, stack_b);
			else
				rb(stack_b);
		}
		else
		{
			if (biggest->index == (*stack_b)->index)
				push_a(stack_a, stack_b);
			else
				rrb(stack_b);
		}
	}
}
