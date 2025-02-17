/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 00:05:38 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/17 01:44:35 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

int     check_sort(t_list **lst)
{
    t_list *head;
    if(!lst)
        exit(1);
    head = *lst;
    while(head->next)
    {
        if(head->index > head->next->index)
        {
            return (0);
        }
        head = head->next;
    }
    return(1);
}