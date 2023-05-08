/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaviobiondo <flaviobiondo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 19:09:27 by flaviobiond       #+#    #+#             */
/*   Updated: 2023/04/30 14:16:45 by flaviobiond      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

//il primo elemento diventa l'ultimo

void	ra(t_stack *a, int j) 
{
	int	i;
	int	swap;
	int	swap1;

	i = a->element - 1;
	swap = a->array[i];
	while (--i >= (a->element - a->element))
	{
		swap1 = a->array[i];
		a->array[i] = swap;
		swap = swap1;
	}
	a->array[a->element - 1] = swap;
	if(j == 1)
	write(1, "ra\n", 3);
}

void	rb(t_stack *b, int j)
{
	int	i;
	int	swap;
	int	swap1;

	i = b->element - 1;
	swap = b->array[i];
	while (--i >= 0)
	{
		swap1 = b->array[i];
		b->array[i] = swap1;
		swap = swap1;
	}
	b->array[b->element - 1] = swap;
	if(j == 1)
	write(1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a, 0);
	rb(b, 0);
	write(1, "rr\n", 3);
}
