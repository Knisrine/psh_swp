/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 21:21:55 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/20 22:01:27 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

void	check_duplicate(t_list *stack)
{
	t_list *head;

	head = (stack)->next;
	while((stack)->next)
	{
		while(head->next)
		{
			if((stack)->content == head->content)
			{
				write(1, "Error\n", 6);
				free(stack);
				exit(1);
			}
			head = head->next;
		}
		stack = (stack)->next;
	}
}
int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		size_stack;

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
	if (check_sort(&stack_a))
		exit(1);
	else if (size_stack <= 3)
		sort_3(&stack_a);
	else if (size_stack <= 5)
		sort_5(&stack_a, &stack_b);
	else if (size_stack <= 100)
		sort_100(&stack_a, &stack_b);
	else if (size_stack <= 500)
		sort_500(&stack_a, &stack_b);
	// system("leaks push_swap");
}
