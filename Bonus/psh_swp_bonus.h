/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psh_swp_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 21:23:10 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/28 18:32:07 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PSH_SWP_BONUS_H
# define PSH_SWP_BONUS_H

# include "gnl/get_next_line.h"

typedef struct s_data
{
	char	**result;
	int		i;
	int		j;
	int		start;
	int		word_count;
	char	*tmp;
}	t_data;

typedef struct t_list
{
	int				content;
	int				index;
	struct t_list	*next;
	struct t_list	*prev;
}	t_list;

t_list	*ft_lstnew(int content);
void	ft_addback(t_list **lst, t_list *new);
void	ft_addfront(t_list **lst, t_list *new);
int		ft_lstsize(t_list *list);
int		ft_issign(char c);
int		ft_isspace(char c);
int		ft_isdigit(char c);
int		check_sort(t_list **stack_a);
char	**ft_split(char *s, char c);
long	ft_atoi(char *str);
void	get_small(t_list **smallest, t_list *head);
void	get_bgst(t_list **biggest, t_list *head);
int		get_position(t_list *stack, t_list *bggst);
void	index_list(t_list **stack);
void	check_error(int ac, char **argmnt, int i);
void	make_lnkdlst(int ac, char **av, t_list **stack_a);
void	swap(t_list **list);
void	sa(t_list **lst);
void	sb(t_list **lst);
void	ss(t_list **lst1, t_list **lst2);
void	rotate(t_list **list);
void	ra(t_list **lst);
void	rb(t_list **lst);
void	rr(t_list **lst1, t_list **lst2);
void	rev_rotate(t_list **list);
void	rra(t_list **lst);
void	rrb(t_list **lst);
void	rrr(t_list **lst1, t_list **lst2);
void	push_a(t_list **list_a, t_list **list_b);
void	push_b(t_list **list_a, t_list **list_b);
void	ft_lstclear(t_list **stack);
#endif