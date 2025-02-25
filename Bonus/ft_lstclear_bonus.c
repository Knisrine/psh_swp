/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 01:07:14 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/24 23:16:47 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp_bonus.h"

void	ft_lstclear(t_list **stack)
{
	t_list	*head;

	if (!stack || !(*stack))
		return ;
	head = NULL;
	while (*stack)
	{
		head = (*stack)->next;
		free(*stack);
		*stack = head;
	}
	*stack = NULL;
}
