/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addBack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 01:11:28 by nikhtib           #+#    #+#             */
/*   Updated: 2025/01/21 22:34:09 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

void	ft_addBack(t_list **lst, t_list *new)
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