/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 18:08:07 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/15 22:34:15 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

void    rev_rotate(t_list **list)
{
    t_list *first = NULL;
    t_list *last = NULL;
    t_list *save = NULL;

    if(*list == NULL)
     return;
    first = *list;
    last = first;
    ///make backward linked list;
    
    while(first->next)
    {
       last = last->next;
       last->prev = first;
       first = first->next;
    }
    //return fisrt to the frst node
    first = *list;
    //then move the last node to the first 
    last->next = first;
    save = last;
    last = last->prev;
    save->prev = NULL;
    last->next = NULL;
  
    *list = save;
   
}
