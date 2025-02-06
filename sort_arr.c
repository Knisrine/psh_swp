/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_arr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:52:33 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/06 13:55:29 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

void    sort_arr(int **arr)
{
    int i = 0;
    int j;
    int tmp;
    while (i < size)
    {
        j = i + 1;
        if (*arr[i] > *arr[j])
        {
            tmp = *arr[i];
            *arr[i] = *arr[j];
            *arr[j] = tmp;   
        }
        printf("SS-->[%d]",*arr[i]);
        // head = head->next;
        i++;
    }
}