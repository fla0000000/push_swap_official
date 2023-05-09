/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alghoritm3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaviobiondo <flaviobiondo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:09:51 by flaviobiond       #+#    #+#             */
/*   Updated: 2023/05/09 14:57:37 by flaviobiond      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_three(t_stack *a)
{
	if(a->array[0] < a->array[1] && a->array[1] < a->array[2])
		return ;
	else if (a->array[0] > a->array[1] && a->array[0] > a->array[2])
	{
		ra(a, 1);
		if(a->array[0] > a->array[1])
		sa(a, 1);
	}
	else if (a->array[1] > a->array[0] && a->array[1] > a->array[2])
	{
	rra(a, 1);
	if(a->array[0] > a->array[1])
	sa(a, 1);
	}
	if(a->array[0] > a->array[1] && a->array[0] < a->array[2])
	sa(a, 1);
}

void	ft_two(t_stack *a)
{
	if(a->array[0] > a->array[1])
	sa(a, 1);
}
void	ft_four(t_stack *a, t_stack *b)
{
	if(a->array[0] < a->array[1] && a->array[1] < a->array[2] 
		&& a->array[2] < a->array[3] && a->array[3] < a->array[4])
			return ;
	ft_min_swap_first_element(a);
	pb(a, b);
	ft_three(a);
	pa(a, b);
}