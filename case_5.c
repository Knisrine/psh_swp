/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 14:09:10 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/06 12:05:03 by nikhtib          ###   ########.fr       */
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
                pb(&(*stack_a), &(*stack_b));
            else if((int )(smallest->content) == (int )(*stack_a)->next->content)
            {
                r_ab(&(*stack_a));
                pb(&(*stack_a), &(*stack_b));
            }
            else if((int )(smallest->content) == (int )(*stack_a)->next->next->content)
                {
                    r_ab(&(*stack_a));
                    r_ab(&(*stack_a));
                    pb(&(*stack_a), &(*stack_b));
                }
            else if((int )(smallest->content) == (int )(*stack_a)->next->next->next->content)
                {
                    r_ab(&(*stack_a));
                    r_ab(&(*stack_a));
                    r_ab(&(*stack_a));
                    pb(&(*stack_a), &(*stack_b));
                }
            else if((int )(smallest->content) == (int )(*stack_a)->next->next->next->next->content)
                {
                    rr_ab(&(*stack_a));
                    pb(&(*stack_a), &(*stack_b));
                }
            i++;
        }
        case_3(&(*stack_a));
        pa(&(*stack_a), &(*stack_b));
        pa(&(*stack_a), &(*stack_b));
}
