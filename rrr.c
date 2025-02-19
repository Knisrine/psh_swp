/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 23:03:56 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/19 01:18:22 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

void	rrr(t_list **list)
{
	t_list *frst = NULL;
	t_list *last = NULL;
	t_list *n_last = NULL;

	if (*list == NULL)
		return ;
	frst = *list;
	last = frst;

	/// make backward linked list;
	while (frst->next)
	{
		last = last->next;
		last->prev = frst;
		frst = frst->next;
	}
	// switch last to first
	frst = *list;
	n_last = last->prev;
	last->next = frst->next;
	last->prev = NULL;
	// switch first to last
	n_last->next = frst;
	frst->prev = n_last;
	frst->next = NULL;
	// Done
	*list = last;
	write(1, "rrr\n", 4);
}