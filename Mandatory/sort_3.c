/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 14:08:17 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/19 16:35:46 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

void	sort_3(t_list **stack)
{
	t_list	*biggst;

	if (!(*stack))
		return ;
	biggst = *stack;
	get_bgst(&biggst, *stack);
	if ((*stack)->index == biggst->index)
		ra(stack);
	else if ((*stack)->next->index == biggst->index)
	{
		sa(stack);
		ra(stack);
	}
	if ((*stack)->index > (*stack)->next->index)
		sa(stack);
	ft_lstclear(stack);
}
