/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 18:08:07 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/19 16:24:05 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

void	rev_rotate(t_list **list)
{
	t_list	*first;
	t_list	*last;
	t_list	*save;

	first = NULL;
	last = NULL;
	save = NULL;
	if (*list == NULL)
		return ;
	first = *list;
	last = first;
	/// make backward linked list;
	while (first->next)
	{
		last = last->next;
		last->prev = first;
		first = first->next;
	}
	// return fisrt to the frst node
	first = *list;
	// then move the last node to the first
	last->next = first;
	save = last;
	last = last->prev;
	save->prev = NULL;
	last->next = NULL;
	*list = save;
}
void	rra(t_list **lst)
{
	rev_rotate(lst);
	write(1, "rra\n", 4);
}
void	rrb(t_list **lst)
{
	rev_rotate(lst);
	write(1, "rrb\n", 4);
}