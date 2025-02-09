/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_ab.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:48:29 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/07 22:21:34 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

void    r_ab(t_list **list)
{
    t_list *first = NULL;
    t_list *last = NULL;
    t_list  *save = NULL;
    first = *list;
    last = *list;
    save = first;
    //move to the last node
    while (last->next)
    last = last->next;
    //then move the first to th last
    *list = first->next;
    last->next = save;
    save->next = NULL;

}