/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 21:21:55 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/14 18:00:17 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

static int	ft_isspace(char c)
{
	return(c == ' ' || (c >= 9 && c <= 13));
}
static int	ft_issign(char c)
{
	return(c == '-' || c == '+');
}
static int	ft_isdigit(char c)
{
	return(c >= '0' && c <= '9');
}

static void check_error(int ac, char **argmnt)
{
    int i;
    int j;
    int flag;
    i = 1;
    while(i < ac)
    {
        j = 0;
        flag = 0;
        while(argmnt[i][j])
        {
            if(ft_issign(argmnt[i][j]))
                flag++;
            if(!ft_isspace(argmnt[i][j]))
            {
                if(flag > 1 || (!ft_isdigit(argmnt[i][j]) && !ft_issign(argmnt[i][j])))
                {
                    write(1, "Error\n", 6);
                    exit(1);
                }
            }
            j++;
        }
        i++;
    }
}

void    static make_lnkdlst(int ac, char **av, t_list **stack_a)
{
    int i;
    char **str;
    
    i = 1;
    int j;
    while(i < ac)
    {
        str = ft_split(av[i],' ');
        j = 0;
        while(str[j])
        {
            ft_addBack(&(*stack_a),ft_lstnew(ft_atoi(str[j])));
            free(str[j]);
            j++;
        }
        free(str);
        i++;
    }
}

int main(int ac, char **av)
{
    t_list *stack_a;
    t_list *stack_b;
    int size_stack;
    
    if(ac == 1)
        return(0);
    stack_a = NULL;
    stack_b =  NULL;
    check_error(ac,av);
    make_lnkdlst(ac,av,&stack_a);
    if((int )stack_a->content > 2147483647)
        write(1, "Error\n", 6);
    size_stack = ft_lstSize(stack_a);
    
    if(size_stack == 2)
        swp_ab(&stack_a);
    ////////case 3 ////////
    if(size_stack == 3)
        case_3(&stack_a);
    ////////case 5 ///////
    if(size_stack == 5)
        case_5(&stack_a,&stack_b);
    ///////__indexn__///////////
    index_list(&stack_a);
    int start = 0;
    int end = 15;
    ///////algo///////
    while(stack_a && (start <= end))
    {
        if((stack_a->index >= start) && (stack_a->index <= end))
            pb(&stack_a, &stack_b);
        else if(stack_a->index > end)
            r_ab(&stack_a);
        else if(stack_a->index < start)
        {
            pb(&stack_a, &stack_b);
            r_ab(&stack_b);
        }
            start++;
            end++;
    }
    // exit(1);

//////////Show Stacks///////////////

    printf("--------stack_A--------\n");
    while(stack_a)
    {

       stack_a = stack_a->next;
    
    free(stack_a);
    }
        // exit(1);
    printf("--------stack_B--------\n");
    
    while(stack_b)
    {
        stack_b = stack_b->next;
    }
    // system("leaks push_swp");
    // exit(1);
        // exit(1);
    // system("leaks a.out");
    }
