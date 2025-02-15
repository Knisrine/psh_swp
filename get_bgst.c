/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_bgst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:06:22 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/15 19:08:47 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

int    get_bgst(t_list **biggest, t_list *head)
{
    int i;

    i = 0;
    while (head)
    {   
        i++;
        if ((*biggest)->index < head->index)
            {
                *biggest = head;
                i++;
            }
        head = head->next;
    }
    return (i);
}