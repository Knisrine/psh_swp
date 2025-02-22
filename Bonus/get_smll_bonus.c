/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_smll_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:01:57 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/21 19:12:30 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp_bonus.h"

void	get_small(t_list **smallest, t_list *head)
{
	if (head == NULL)
		return ;
	while (head->next)
	{
		if ((*smallest)->content > (head->content))
			*smallest = head;
		head = head->next;
	}
}
