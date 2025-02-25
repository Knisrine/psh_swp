/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 12:54:51 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/25 11:52:19 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

void	push_a(t_list **list_a, t_list **list_b)
{
	t_list	*save;

	if ((*list_b) == NULL)
		return ;
	save = *list_b;
	*list_b = save->next;
	save->next = NULL;
	ft_addfront(list_a, save);
	write(2, "pa\n", 3);
}
