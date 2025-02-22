/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstSize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:19:25 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/21 19:13:22 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp_bonus.h"

int	ft_lstsize(t_list *list)
{
	int	count;

	if (!list)
		return (0);
	count = 0;
	while (list)
	{
		count++;
		list = list->next;
	}
	return (count);
}
