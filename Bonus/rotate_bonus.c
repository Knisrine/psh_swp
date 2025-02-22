/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:48:29 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/21 22:48:03 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp_bonus.h"

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
	while (last->next)
		last = last->next;
	*list = first->next;
	last->next = save;
	save->next = NULL;
}

void	ra(t_list **lst)
{
	rotate(lst);
}

void	rb(t_list **lst)
{
	rotate(lst);
}
