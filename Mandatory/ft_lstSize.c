/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstSize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:19:25 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/19 17:34:12 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

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
