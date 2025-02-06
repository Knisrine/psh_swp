// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   sort_list.c                                        :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/02/03 18:04:25 by nikhtib           #+#    #+#             */
// /*   Updated: 2025/02/05 20:35:11 by nikhtib          ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#include "psh_swp.h"

void    sort_arr(int *arr, int size)
{
    int i = 0;
    int j = 0;
    int tmp = 0;
    while (i < size)
    {
        j = i + 1;
        if (arr[i] > arr[j])
        {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;   
            i = 0;
        }
        // head = head->next;
        i++;
    }
}

void    sort_list(t_list **stack)
{
    t_list *head = NULL;
    // t_list *current = NULL;
    int i;
    int size;
    // int temp;

    size = ft_lstSize(*stack);
    if (!stack || !*stack)
        return;
    head = *stack;
    int arr[size];
    i = 0;
    while(head)
    {
        arr[i] = (int)head->content;
        head = head->next;
        i++;
    }

    sort_arr(arr, size);
        // exit(1);
   i = 0;
   while(i < size)
   {
        printf("%d\n", arr[i]);
        i++;
   }
}