/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:04:25 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/19 23:11:40 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

void	sort_arr(int *arr, int size)
{
	int	j;
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	part(t_list *head, int *arr, int size)
{
	int	i;

	while (head)
	{
		i = 0;
		while (i < size)
		{
			if (head->content == arr[i])
				head->index = i;
			i++;
		}
		head = head->next;
	}
}

void	index_list(t_list **stack)
{
	t_list	*head;
	int		i;
	int		size;
	int		*arr;

	i = 0;
	size = ft_lstsize(*stack);
	if (!stack || !*stack)
		return ;
	arr = malloc(sizeof (int) * size);
	if (!arr)
		exit(1);
	head = *stack;
	while (head)
	{
		arr[i] = head->content;
		head = head->next;
		i++;
	}
	head = *stack;
	sort_arr(arr, size);
	part(head, arr, size);
	free(arr);
}
