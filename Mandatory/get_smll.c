/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_smll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:01:57 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/23 22:38:08 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

void	get_small(t_list **smallest, t_list *head)
{
	if (head == NULL)
		return ;
	while (head)
	{
		if ((*smallest)->content > (head->content))
			*smallest = head;
		head = head->next;
	}
}
