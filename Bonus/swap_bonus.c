/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:05:51 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/21 20:55:11 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp_bonus.h"

void	swap(t_list **list)
{
	t_list	*frst;
	t_list	*scnd;

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
}

void	sb(t_list **lst)
{
	swap(lst);
}
