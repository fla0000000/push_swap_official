/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaviobiondo <flaviobiondo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:40:36 by flaviobiond       #+#    #+#             */
/*   Updated: 2023/05/12 15:47:41 by flaviobiond      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//git status
// git add <file>
// git commit -m "gg"
// git push
void	init_b(t_stack *a, t_stack *b)
{
	int	i;

	i = -1;
	b->array = (int *)malloc(a->element * sizeof(int));
	if (!b->array)
		exit(write(2, "Error\n", 6));
	while (++i < a->element)
		b->array[i] = 0;
}

int	order(t_stack *a)
{
	int	i;

	i = 1;
	while (i < a->element)
	{
		if (a->array[i] < a->array[i - 1])
			return (0);
		i++;
	}
	return (1);
}

void	ft_num_stack(t_stack *stack)
{
	int	i;

	i = 0;
	stack->num = (int *) malloc(stack->element* sizeof(int));
	while (i < stack->element)
	{
		stack->num[i] = stack->array[i];
		i++;
	}
}

void	ft_arr_sort(t_stack *stack)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	while (j < stack->element - 1)
	{
		i = 0;
		while (i < stack->element - 1)
		{
			if (stack->num[i] > stack->num[i + 1])
			{
				temp = stack->num[i];
				stack->num[i] = stack->num[i + 1];
				stack->num[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
}

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;

	check_arg(ac, av);
	check_counter(ac, av, &a);
	double_numbers(&a);
	order(&a);
	//ft_num_stack(&a);
	//ft_arr_sort(&a);
	init_b(&a, &b);
	algorith(&a, &b);
	ft_print_number(&a, &b);
	//ft_three(&a);
	//ft_five(&a, &b);
}



void	ft_centos(t_stack *a, t_stack *b)
{
	int i;
	int y;
	//int count;

	i = -1;
	//count = generate_lis(a->array, a->element);
	// generate_lis(a->array, a->element);
	//printf("%d\n", i);
	y = a->totelement - 3;
	i = -1;
	while (++i < y)
	{
		ft_min_swap_first_element(a);
		pb(a, b);
	}
	// ft_three(a);
	// y = -1;
	// while (++y <= i)
	// 	pa(a, b);
	ft_print_number(a, b);
}
