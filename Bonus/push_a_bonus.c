/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 12:54:51 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/21 20:55:49 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp_bonus.h"

void	push_a(t_list **list_a, t_list **list_b)
{
	t_list	*save;

	if ((*list_b) == NULL)
		return ;
	save = *list_b;
	*list_b = save->next;
	save->next = NULL;
	ft_addfront(list_a, save);
}
