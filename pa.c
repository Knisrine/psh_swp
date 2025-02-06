/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 12:54:51 by nikhtib           #+#    #+#             */
/*   Updated: 2025/01/27 13:12:52 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

void    pa(t_list **list_a ,t_list **list_b)
{
    t_list *save;
    if((*list_b) == NULL)
        return;
    // exit(1);
    save = *list_b;
    *list_b = save->next;
    save->next = NULL;
    ft_addFront(list_a, save);
}
