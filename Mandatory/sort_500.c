/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_500.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 23:34:56 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/22 01:15:56 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

static void	sort_500_part1(t_list **stack_a, t_list **stack_b)
{
	int	start;
	int	end;

	start = 0;
	end = 35;
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

void	sort_500(t_list **stack_a, t_list **stack_b)
{
	t_list	*biggest;
	int		position;

	sort_500_part1(stack_a, stack_b);
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
	ft_lstclear(stack_a);
}
