/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 00:57:55 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/21 19:13:26 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp_bonus.h"

static int	ft_count_word(char const *st, char c)
{
	int	i;
	int	count;
	int	flag;

	i = 0;
	count = 0;
	flag = 1;
	while (st[i] != '\0')
	{
		if (st[i] == c)
		{
			flag = 1;
		}
		else if (flag == 1)
		{
			count++;
			flag = 0;
		}
		i++;
	}
	return (count);
}

static char	*make_str(char const *str, int len)
{
	int		i;
	char	*st;

	i = 0;
	st = malloc(sizeof(char) * (len + 1));
	if (!st)
		return (NULL);
	while (i < len)
	{
		st[i] = str[i];
		i++;
	}
	st[i] = '\0';
	return (st);
}

static int	split_string(t_data *data, const char *s, char c)
{
	while (s[data->i] != '\0')
	{
		while (s[data->i] == c)
			data->i++;
		data->start = data->i;
		while (s[data->i] != '\0' && s[data->i] != c)
			data->i++;
		if (data->i > data->start)
		{
			data->tmp = make_str(s + data->start, data->i - data->start);
			if (!data->tmp)
			{
				data->j--;
				while (data->j >= 0)
				{
					free(data->result[data->j]);
					data->j--;
				}
				return (free(data->result), 0);
			}
			data->result[data->j++] = data->tmp;
		}
	}
	return (1);
}

char	**ft_split(char *s, char c)
{
	t_data	data;

	if (!s)
		return (NULL);
	data.word_count = ft_count_word(s, c);
	data.result = (char **)malloc(sizeof(char *) * (data.word_count + 1));
	if (!(data.result))
		return (NULL);
	data.i = 0;
	data.j = 0;
	if (!split_string(&data, s, c))
		return (NULL);
	data.result[data.j] = NULL;
	return (data.result);
}
