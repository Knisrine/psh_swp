/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 20:21:33 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/15 22:38:16 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

void Sort(t_list **stack_a, t_list **stack_b)
{
    t_list *biggest;
    int position;
    // get_bgst(&biggest,*stack_b);
    int i = 0;
    while(*stack_b)
    {
        biggest = *stack_b;
        get_bgst(&biggest,*stack_b);
        position = get_position(*stack_b,biggest);
        if(position < (ft_lstSize(*stack_b) / 2))
        {
                if(biggest->index == (*stack_b)->index)
                    push_a(&(*stack_a),&(*stack_b));
                else
                    rotate(&(*stack_b));
        }
        else
        {
            if(biggest->index == (*stack_b)->index)
                    push_a(&(*stack_a),&(*stack_b)); 
            else
                rev_rotate(&(*stack_b));
       
        }
        i++;
    }
}