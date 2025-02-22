/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 18:08:07 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/21 22:45:16 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp_bonus.h"

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
	while (first->next)
	{
		last = last->next;
		last->prev = first;
		first = first->next;
	}
	first = *list;
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
}

void	rrb(t_list **lst)
{
	rev_rotate(lst);
}
