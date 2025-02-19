/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psh_swp.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 21:23:10 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/19 01:31:05 by nikhtib          ###   ########.fr       */
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

t_list	*ft_lstnew(int content);
void    get_small(t_list **smallest, t_list *head);
void		get_bgst(t_list **biggest, t_list *head);
int     get_position(t_list *stack, t_list *bggst);
int		ft_lstSize(t_list *list);
int		ft_strlen(char *str);
int     check_sort(t_list **lst);
long	ft_atoi(char *str);
char	**ft_split(char  *s, char c);
char	*ft_strdup(char *s1);
void	sort_100(t_list **stack_a, t_list **stack_b);
void	sort_500(t_list **stack_a, t_list **stack_b);
void    index_list(t_list **stack);
void    case_5(t_list **stack_a, t_list **stack_b);
void    case_3(t_list **stack_a);
void	ft_addBack(t_list **lst, t_list *new);
void	ft_addFront(t_list **lst, t_list *new);
void	swap(t_list **list);
void    sa(t_list **lst);
void    sb(t_list **lst);
void	rotate(t_list **list);
void    ra(t_list **lst);
void    rb(t_list **lst);
void	rev_rotate(t_list **list);
void	push_a(t_list **list_a ,t_list **list_b);
void	push_b(t_list **list_a ,t_list **list_b);
void	ft_putnbr(long nb);
void    rrb(t_list **lst);
void    rra(t_list **lst);

# endif