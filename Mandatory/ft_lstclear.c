/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 01:07:14 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/24 22:21:15 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

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
