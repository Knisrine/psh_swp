/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_arr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:52:33 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/21 22:38:23 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

void	sort_arr(int **arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		if (*arr[i] > *arr[j])
		{
			tmp = *arr[i];
			*arr[i] = *arr[j];
			*arr[j] = tmp;
		}
		i++;
	}
}
