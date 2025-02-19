/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:48:29 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/19 01:29:35 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

void	rotate(t_list **list)
{
	t_list	*first;
	t_list	*last;
	t_list	*save;

	first = NULL;
	last = NULL;
	save = NULL;
	if (!(*list)->next)
		return ;
	first = *list;
	last = *list;
	save = first;
	// move to the last node
	while (last->next)
		last = last->next;
	// then move the first to th last
	*list = first->next;
	last->next = save;
	save->next = NULL;
}

void	ra(t_list **lst)
{
	rotate(lst);
	write(1, "ra\n", 3);
}

void	rb(t_list **lst)
{
	rotate(lst);
	write(1, "rb\n", 3);
}