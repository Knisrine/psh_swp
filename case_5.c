/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 14:09:10 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/15 22:40:13 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

void    case_5(t_list **stack_a, t_list **stack_b)
{
    t_list *smallest = NULL;
    t_list *head = NULL;
    int i;

        i = 0;
        while (i < 2)
        {
            head = *stack_a;
            smallest = head;
            get_small(&smallest,head);
            if((int )(smallest->content) == (int )(*stack_a)->content)
                push_b(&(*stack_a), &(*stack_b));
            else if((int )(smallest->content) == (int )(*stack_a)->next->content)
            {
                rotate(&(*stack_a));
                push_b(&(*stack_a), &(*stack_b));
            }
            else if((int )(smallest->content) == (int )(*stack_a)->next->next->content)
                {
                    rotate(&(*stack_a));
                    rotate(&(*stack_a));
                    push_b(&(*stack_a), &(*stack_b));
                }
            else if((int )(smallest->content) == (int )(*stack_a)->next->next->next->content)
                {
                    rotate(&(*stack_a));
                    rotate(&(*stack_a));
                    rotate(&(*stack_a));
                    push_b(&(*stack_a), &(*stack_b));
                }
            else if((int )(smallest->content) == (int )(*stack_a)->next->next->next->next->content)
                {
                    rev_rotate(&(*stack_a));
                    push_b(&(*stack_a), &(*stack_b));
                }
            i++;
        }
        case_3(&(*stack_a));
        push_a(&(*stack_a), &(*stack_b));
        push_a(&(*stack_a), &(*stack_b));
}
