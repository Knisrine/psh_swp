/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 14:09:10 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/18 02:50:56 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

// void    case_5(t_list **stack_a, t_list **stack_b)
// {
//     t_list *smallest = NULL;
//     t_list *head = NULL;
//     int i;

//         i = 0;
//         while (i < 2)
//         {
//             head = *stack_a;
//             smallest = head;
//             get_small(&smallest,head);
//             if((smallest->content) == (*stack_a)->content)
//                     push_b(&(*stack_a), &(*stack_b));
//             else if((int )(smallest->content) == (int )(*stack_a)->next->content)
//             {
//                 ra(&(*stack_a));
//                 push_b(&(*stack_a), &(*stack_b));
//             }
//             else if((smallest->content) == (*stack_a)->next->next->content)
//                 {
//                     ra(&(*stack_a));
//                     ra(&(*stack_a));
//                     push_b(&(*stack_a), &(*stack_b));
//                 }
//             else if((smallest->content) == (*stack_a)->next->next->next->content)
//                 {
//                     ra(&(*stack_a));
//                     ra(&(*stack_a));
//                     ra(&(*stack_a));
//                     push_b(&(*stack_a), &(*stack_b));
//                 }
//             else if((smallest->content) == (*stack_a)->next->next->next->next->content)
//                 {
//                     rra(&(*stack_a));
//                     push_b(&(*stack_a), &(*stack_b));
//                 }
//             i++;
//         }
//         case_3(&(*stack_a));
//         push_a(&(*stack_a), &(*stack_b));
//         push_a(&(*stack_a), &(*stack_b));
// }

void    case_5(t_list **stack_a, t_list **stack_b)
{
    t_list *smallest = NULL;
    int i;
    int position;

    smallest = *stack_a;
    i = 0;
    position = 0;
    while(i < 2)
    {
        while(ft_lstSize(*stack_a) > 3)
        {
            get_small(&smallest, *stack_a);
            if(smallest->content == (*stack_a)->content)
                push_b(stack_a, stack_b);
            else
                ra(stack_a);
            printf("%d\n",ft_lstSize(*stack_a));
            printf("%d\n",smallest->content);
            i++;
            printf("----------stck1------------");
            while((*stack_a)->next)
            {
                printf("%d\n",(*stack_a)->content);
                *stack_a = (*stack_a)->next;
            }
            printf("----------stck2------------");
            while((*stack_b)->next)
            {
                printf("%d\n",(*stack_b)->content);
                *stack_a = (*stack_)->next;
            }
            if(i == 3)
                exit(1);
        }
        i++;
    }
        case_3(&(*stack_a));
        push_a(&(*stack_a), &(*stack_b));
        push_a(&(*stack_a), &(*stack_b));
}
