/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_bgst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:06:22 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/19 17:37:28 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

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
