/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addBack_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 01:11:28 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/21 19:13:04 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp_bonus.h"

void	ft_addback(t_list **lst, t_list *new)
{
	t_list	*pt;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	pt = (*lst);
	while (pt->next != NULL)
	{
		pt = pt->next;
	}
	pt->next = new;
}
