/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:48:29 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/25 15:26:51 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp_bonus.h"
#include <stdio.h>

void	rotate(t_list **list)
{
	t_list	*first;
	t_list	*last;
	t_list	*save;

	if (!(*list))
		return ;
	first = NULL;
	last = NULL;
	save = NULL;
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

void	rr(t_list **lst1, t_list **lst2)
{
	ra(lst1);
	rb(lst2);
}
