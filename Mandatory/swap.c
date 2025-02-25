/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:05:51 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/25 14:11:58 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

void	swap(t_list **list)
{
	t_list	*frst;
	t_list	*scnd;

	if (!(*list) || !list)
		return ;
	frst = NULL;
	scnd = NULL;
	frst = *list;
	scnd = frst->next;
	frst->next = scnd->next;
	scnd->next = frst;
	*list = scnd;
}

void	sa(t_list **lst)
{
	swap(lst);
	write(2, "sa\n", 3);
}

void	sb(t_list **lst)
{
	swap(lst);
	write(2, "sb\n", 3);
}
