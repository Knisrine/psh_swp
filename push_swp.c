/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhtib <nikhtib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 21:21:55 by nikhtib           #+#    #+#             */
/*   Updated: 2025/02/17 22:12:12 by nikhtib          ###   ########.fr       */
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
            if(ft_atoi(str[j])  > 2147483647 || ft_atoi(str[j])  < -2147483648 || (ft_strlen(str[j]) == 1 && ft_issign(*str[j])))
            {
                write(1, "Error\n", 6);
                free(str[j]);
                exit(1);
            }
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
    size_stack = ft_lstSize(stack_a);
    index_list(&stack_a);
    if(size_stack == 1)
        return(0);
    if (check_sort(&stack_a))
        exit(1);
    else if(size_stack == 2)
        sa(&stack_a);
    else if(size_stack == 3)
        case_3(&stack_a);
    else if(size_stack <= 5)
        case_5(&stack_a,&stack_b);
    else if(size_stack <= 100)
        sort_100(&stack_a, &stack_b);
    else if(size_stack <= 500)
        sort_500(&stack_a, &stack_b);
    }
