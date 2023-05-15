/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaviobiondo <flaviobiondo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:40:36 by flaviobiond       #+#    #+#             */
/*   Updated: 2023/05/15 16:55:01 by flaviobiond      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

	i = -1;
	stack->num = (int *)malloc(stack->element * sizeof(int));
	while (++i < stack->element)
		stack->num[i] = stack->array[i];
}

void	ft_arr_sort(t_stack *stack)
{
	int	i;
	int	j;
	int	temp;

	j = -1;
	while (++j < stack->element - 1)
	{
		i = -1;
		while (++i < stack->element - 1)
		{
			if (stack->num[i] > stack->num[i + 1])
			{
				temp = stack->num[i];
				stack->num[i] = stack->num[i + 1];
				stack->num[i + 1] = temp;
			}
		}
	}
}

void	ft_empty_stack_a(t_stack *stack)
{
	int	i;
	int	j;

	j = -1;
	while (++j < stack->element)
	{
		i = -1;
		while (++i < stack->element)
		{
			if (stack->array[j] == stack->num[i])
			{
				stack->array[j] = i + 1;
				break ;
			}
		}
	}
}

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;

	check_arg(ac, av);
	check_counter(ac, av, &a);
	double_numbers(&a);
	if (order(&a))
	{
		free(a.array);
		free(a.num);
		return (0);
	}
	if (a.element > 5)
	{
		ft_num_stack(&a);
		ft_arr_sort(&a);
		ft_empty_stack_a(&a);
	}
	init_b(&a, &b);
	algorith(&a, &b);
	free(a.array);
	free(b.array);
	free(a.num);
}
