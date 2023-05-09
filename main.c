/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaviobiondo <flaviobiondo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:40:36 by flaviobiond       #+#    #+#             */
/*   Updated: 2023/05/09 19:43:15 by flaviobiond      ###   ########.fr       */
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
	if(!b->array)
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

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;

	check_arg(ac, av);
	check_counter(ac, av, &a);
	double_numbers(&a);
	order(&a);
	init_b(&a, &b);
	algorith(&a, &b);
	ft_print_number(&a, &b);
	//ft_three(&a);
	//ft_five(&a, &b);
}

void	ft_centos(t_stack *a, t_stack *b)
{
	int	i;
	int	y;

	i = -1;
	y = a->element - 3;
	while (++i < y)
	{
		ft_min_swap_first_element(a);
		pb(a, b);
	}
	ft_three(a);
	y = b->element;
	while (y-- > 0)
		pa(a, b);
	// ft_print_number(a);
	// printf("stack b\n");
	// ft_print_number(b);
}gi