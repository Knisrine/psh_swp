/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 14:09:10 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/19 16:35:54 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

void	sort_5(t_list **stack_a, t_list **stack_b)
{
	t_list	*smallest;

	smallest = NULL;
	while (ft_lstsize(*stack_a) > 3)
	{
		smallest = *stack_a;
		get_small(&smallest, *stack_a);
		if (smallest->content == (*stack_a)->content)
			push_b(stack_a, stack_b);
		else
			ra(stack_a);
	}
	sort_3(stack_a);
	while (*stack_b)
		push_a(stack_a, stack_b);
}
