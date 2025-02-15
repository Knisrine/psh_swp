/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_position.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 21:49:34 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/15 21:50:02 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

int     get_position(t_list *stack, t_list *bggst)
{
    int i;

    i = 0;
    while(stack)
    {
        if(stack->index == bggst->index)
            return (i);
        i++;
        stack = stack->next;
    }
    return (-1);
}