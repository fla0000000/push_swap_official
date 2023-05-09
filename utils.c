/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbiondo <fbiondo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:05:10 by flaviobiond       #+#    #+#             */
/*   Updated: 2023/05/09 17:22:25 by fbiondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_min(t_stack *a)
{
	int i;
	int min;

	min = 0;
	i = -1;
	while(++i < a->element)
	{
		if(a->array[i] < a->array[min])
		min = i;
	}
	return(min);
}

int    ft_max(t_stack *a)
{
	int i;
	int max;

	max = 0;	
	i = -1;
	while(++i < a->element)
	{
		if(a->array[i] > a->array[max])
		max = i;
	}
	return(max);
}
void	ft_min_swap_first_element(t_stack *a)
{
	int	min;
	int	i;

	min = ft_min(a);
	
	if(min > a->element / 2)
	{
		i = a->element - min;
		while (i-- > 0)
			rra(a, 1);
	}
	else
	{
		i = min;
		while(i-- > 0)
			ra(a, 1);
	}
}
void	ft_print_number(t_stack *a)
{
	int i = -1;
	while(++i < a->element)
		printf("%d\n", a->array[i]);
		printf("%d\n", a->element);
}
