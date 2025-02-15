/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psh_swp.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 21:23:10 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/15 22:40:27 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef psh_swp_H
# define psh_swp_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


typedef struct s_data
{
	char	**result;
	int		i;
	int		j;
	int		start;
	int		word_count;
	char	*tmp;
} t_data;

typedef struct t_list
{
	int				content;
	struct t_list	*next;
	struct t_list	*prev;
	int index;
} t_list;

void    get_small(t_list **smallest, t_list *head);
int		get_bgst(t_list **biggest, t_list *head);
int     get_position(t_list *stack, t_list *bggst);
void Sort(t_list **stack_a, t_list **stack_b);
void    index_list(t_list **stack);
void    case_5(t_list **stack_a, t_list **stack_b);
void    case_3(t_list **stack_a);
t_list	*ft_lstnew(int content);
char	*ft_strdup(char *s1);
int		ft_strlen(char *str);
void	ft_addBack(t_list **lst, t_list *new);
void	ft_addFront(t_list **lst, t_list *new);
char	**ft_split(char  *s, char c);
void	swap(t_list **list);
void    rrr(t_list **list);
void	rotate(t_list **list);
void	rev_rotate(t_list **list);
void	push_a(t_list **list_a ,t_list **list_b);
void	push_b(t_list **list_a ,t_list **list_b);
void	ft_putnbr(long nb);
int		ft_lstSize(t_list *list);
long	ft_atoi(char *str);

# endif