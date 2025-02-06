/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 14:08:17 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/06 11:56:28 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

void    case_3(t_list **stack_a)
{
    t_list  *last = NULL;
    t_list *midlle = NULL;
    int a;
    int b;
    int c;

    last  = *stack_a;
    midlle = (*stack_a)->next;
    while(last->next)
    last = last->next;
    a = (int) (*stack_a)->content;
    b = (int) midlle->content;
    c = (int) last->content;
        if(a > b && a < c)
          swp_ab(&(*stack_a));
        else if(a > b && b > c)
        {
            swp_ab(&(*stack_a));
            rr_ab(&(*stack_a));
        }
        else if(a > b && a > c)
            r_ab(&(*stack_a));
        else if(a < b && a > c)
            rr_ab(&(*stack_a));
        else if(b > a && b > c)
        {
            swp_ab(&(*stack_a));
            r_ab(&(*stack_a));
        }
}
