/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:28:14 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/21 19:13:32 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp_bonus.h"

int	ft_strlen(char *str)
{
	int	len;

	if (str == NULL)
		return (0);
	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
