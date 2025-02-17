/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 01:26:27 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/14 13:27:56 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

t_list *ft_lstnew(int content)
{
    t_list *new_node;
    
    new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node)
        return (NULL);
        
    new_node->content = content;
    new_node->next = NULL;
    
    return (new_node);
}