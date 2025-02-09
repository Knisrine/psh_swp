/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 21:21:55 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/08 21:20:57 by nikhtib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psh_swp.h"

void    static check_error(int ac, char **argmnt)
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
            if(argmnt[i][j] == '-' || argmnt[i][j] == '+')
                flag++;
            if(argmnt[i][j] != ' ')
            {
                if(flag > 1 || (!(argmnt[i][j] >= '0' && argmnt[i][j] <= '9') 
                && (argmnt[i][j] != '-' && argmnt[i][j] != '+')))
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
            ft_addBack(&(*stack_a),ft_lstnew((int *)ft_atoi(str[j])));
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

    stack_a = NULL;
    stack_b =  NULL;
    int size_stack;
    check_error(ac,av);
    make_lnkdlst(ac,av,&stack_a);
    if((int )stack_a->content > 2147483647)
        write(1, "Error\n", 6);
    size_stack = ft_lstSize(stack_a);
    ////////case 3 ////////
    if(size_stack == 3)
        case_3(&stack_a);
    ////////case 5 ///////
    else if(size_stack == 5)
        case_5(&stack_a,&stack_b);
    ///////__indexn__///////////
    index_list(&stack_a);
    int start = 0;
    int end = 15;
    /////////algo///////
    while(stack_a)
    {
        if((stack_a->index >= start) && (stack_a->index <= end))
            pb(&stack_a, &stack_b);
        // printf("%s\n", stack_b->content);
        else if(stack_a->index > end)
            r_ab(&stack_a);
        else if(stack_a->index < start)
        {
            pb(&stack_a, &stack_b);
            r_ab(&stack_a);
        }
            start++;
            end++;
            // if(start == 5)
            // break;
    }

//////////Show Stacks///////////////

    printf("--------stack_A--------\n");
    while(stack_a)
    {
    printf("[%d]__", stack_a->index);
    printf("%d\n", (int )stack_a->content);

        stack_a = stack_a->next;
    // free(stack_a);
    }
    printf("--------stack_B--------\n");
    
    while(stack_b)
    {
        printf("[%d]__", stack_b->index);
        printf("%d\n", (int )stack_b->content);
        stack_b = stack_b->next;
    }
    // system("leaks a.out");
    // exit(1);
        // exit(1);
    // system("leaks a.out");
    }
