/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaviobiondo <flaviobiondo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:05:10 by flaviobiond       #+#    #+#             */
/*   Updated: 2023/05/14 13:44:25 by flaviobiond      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(t_stack *a)
{
	int	i;
	int	min;

	min = 0;
	i = -1;
	while (++i < a->element)
	{
		if (a->array[i] < a->array[min])
			min = i;
	}
	return (min);
}

int	ft_max(t_stack *a)
{
	int	i;
	int	max;

	max = 0;
	i = -1;
	while (++i < a->element)
	{
		if (a->array[i] > a->array[max])
			max = i;
	}
	return (max);
}

void	ft_min_swap_first_element(t_stack *a)
{
	int	min;
	int	i;

	min = ft_min(a);
	if (min > a->element / 2)
	{
		i = a->element - min;
		while (i-- > 0)
			rra(a, 1);
	}
	else
	{
		i = min;
		while (i-- > 0)
			ra(a, 1);
	}
}

void	ft_print_number(t_stack *a, t_stack *b)
{
	int	i;

	i = -1;
	while (++i < a->element)
		printf("%d\n", a->array[i]);
	printf("elementi %d\n", a->element);
	printf("stack b\n");
	i = -1;
	printf("elementi;%d\n", b->element);
	while (++i < b->element)
		printf("%d\n", b->array[i]);
}
