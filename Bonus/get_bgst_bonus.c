/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_bgst_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:06:22 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/21 19:13:35 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp_bonus.h"

void	get_bgst(t_list **biggest, t_list *head)
{
	while (head)
	{
		if ((*biggest)->index < head->index)
		{
			*biggest = head;
		}
		head = head->next;
	}
	return ;
}
