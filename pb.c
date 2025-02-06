/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:20:44 by nikhtib           #+#    #+#             */
/*   Updated: 2025/01/30 21:51:31 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

void    pb(t_list **list_a ,t_list **list_b)
{
    t_list *save;
    
    if((*list_a) == NULL)
        return;
    save = *list_a;
    *list_a = save->next;
    save->next = NULL;
    ft_addFront(list_b, save);
}
