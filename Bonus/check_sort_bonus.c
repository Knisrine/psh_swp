/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 00:05:38 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/28 18:31:49 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp_bonus.h"

int	check_sort(t_list **stack_a)
{
	t_list	*head;

	if (!stack_a || !(*stack_a))
		return (1);
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
