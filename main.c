/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbiondo <fbiondo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:40:36 by flaviobiond       #+#    #+#             */
/*   Updated: 2023/05/09 18:34:40 by fbiondo          ###   ########.fr       */
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
	//b.array = malloc(a.totelement * sizeof(int));
	double_numbers(&a);
	order(&a);
	init_b(&a, &b);
	algorith(&a, &b);
	//ft_print_number(&a);
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
	ft_print_number(a);
	printf("stack b\n");
	ft_print_number(b);
}

// int	main(void)
// {
// 	t_stack	a;
// 	t_stack	b;
// 	// int		i;

// 	a.array = malloc(5 * sizeof(int));
// 	a.element = 5;
// 	a.array[0] = 5;
// 	a.array[1] = 4;
// 	a.array[2] = 3;
// 	a.array[3] = 1;
// 	a.array[4] = 2;
// 	b.array = malloc(2 * sizeof(int));
// 	b.element = 2;
// 	ft_print_number(&a);
// 	//rra(&a, 1);
// 	ft_five(&a, &b);
// 	ft_print_number(&a);
// 	//ft_min_swap_first_element(&a);
// 	//ft_three(&a);
// 	// b.array[0] = 3;
// 	// b.array[1] = 1;
// 	// b.array[2] = 2;
// 	// pb(&a, &b);
// 	// i = -1;
// 	// while (++i < 3)
// 	// 	printf("%d\n", a.array[i]);
// 	// printf("%d\n", a.element);
// }
