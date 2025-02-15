/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 14:08:17 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/15 22:35:51 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

void    case_3(t_list **stack_a)
{
	t_list  *last = NULL;
	t_list *midlle = NULL;
	int a;
	int b;
	int c;

	last  = *stack_a;
	midlle = (*stack_a)->next;
	while(last->next)
	last = last->next;
	a =(*stack_a)->content;
	b = midlle->content;
	c = last->content;
	if(a > b && a < c)
		swap(&(*stack_a));
	else if(a > b && b > c)
	{
		swap(&(*stack_a));
		rev_rotate(&(*stack_a));
	}
	else if(a > b && a > c)
		rotate(&(*stack_a));
	else if(a < b && a > c)
		rev_rotate(&(*stack_a));
	else if(b > a && b > c)
	{
		swap(&(*stack_a));
		rotate(&(*stack_a));
	}
}
