/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swp_ab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:05:51 by nikhtib           #+#    #+#             */
/*   Updated: 2025/01/27 15:57:10 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

void swp_ab(t_list **list)
{
    t_list *frst = NULL;
    t_list *scnd = NULL;
    
    frst = *list;
    scnd = frst->next;
    frst->next = scnd->next;
    scnd->next = frst;
    *list = scnd;
}
