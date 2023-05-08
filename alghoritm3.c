/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alghoritm3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaviobiondo <flaviobiondo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:09:51 by flaviobiond       #+#    #+#             */
/*   Updated: 2023/05/03 13:19:07 by flaviobiond      ###   ########.fr       */
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