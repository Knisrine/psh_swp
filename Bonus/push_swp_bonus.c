/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swp_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 23:10:09 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/28 18:30:42 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp_bonus.h"

static void	check_duplicate(t_list *stack)
{
	t_list	*head;

	while (stack)
	{
		head = (stack)->next;
		while (head)
		{
			if ((stack)->content == head->content)
			{
				write(2, "Error\n", 6);
				ft_lstclear(&stack);
				exit(1);
			}
			head = head->next;
		}
		stack = (stack)->next;
	}
}

static int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

static	void	p2(char *s, t_list **stack_a, t_list **stack_b)
{
	if (ft_strcmp(s, "rra\n"))
		rra(stack_a);
	else if (ft_strcmp(s, "rrb\n"))
		rrb(stack_b);
	else if (ft_strcmp(s, "rrr\n"))
		rrr(stack_a, stack_b);
	else if (ft_strcmp(s, "pa\n"))
		push_a(stack_a, stack_b);
	else if (ft_strcmp(s, "pb\n"))
		push_b(stack_a, stack_b);
	else
	{
		write(2, "Error\n", 6);
		free(s);
		ft_lstclear(stack_a);
		ft_lstclear(stack_b);
		exit(1);
	}
}

static void	checker(t_list **stack_a, t_list **stack_b, char *s)
{
	while (s)
	{
		if (ft_strcmp(s, "sa\n"))
			sa(stack_a);
		else if (ft_strcmp(s, "sb\n"))
			sb(stack_b);
		else if (ft_strcmp(s, "ss\n"))
			ss(stack_a, stack_b);
		else if (ft_strcmp(s, "ra\n"))
			ra(stack_a);
		else if (ft_strcmp(s, "rb\n"))
			rb(stack_b);
		else if (ft_strcmp(s, "rr\n"))
			rr(stack_a, stack_b);
		else
			p2(s, stack_a, stack_b);
		s = get_next_line(0);
	}
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		size_stack;
	char	*s;

	if (ac == 1)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	check_error(ac, av, 1);
	make_lnkdlst(ac, av, &stack_a);
	check_duplicate(stack_a);
	size_stack = ft_lstsize(stack_a);
	index_list(&stack_a);
	if (size_stack == 1)
		return (0);
	s = get_next_line(0);
	checker(&stack_a, &stack_b, s);
	if ((check_sort (&stack_a)) && (ft_lstsize (stack_b) == 0))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	free(s);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
}
