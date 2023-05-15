/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaviobiondo <flaviobiondo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 22:02:04 by flaviobiond       #+#    #+#             */
/*   Updated: 2023/05/15 16:43:50 by flaviobiond      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rrb(t_stack *b, int j)
{
	int	i;
	int	swap;
	int	swap1;

	i = -1;
	swap = b->array[i];
	while (++i < b->element)
	{
		swap1 = b->array[i];
		b->array[i] = swap;
		swap = swap1;
	}
	i = 0;
	b->array[i] = swap;
	if (j == 1)
		write(1, "rrb\n", 4);
}

void	rra(t_stack *a, int j)
{
	int	i;
	int	swap;
	int	swap1;

	i = -1;
	swap = a->array[i];
	while (++i < a->element)
	{
		swap1 = a->array[i];
		a->array[i] = swap;
		swap = swap1;
	}
	i = 0;
	a->array[i] = swap;
	if (j == 1)
		write(1, "rra\n", 4);
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(a, 0);
	rrb(b, 0);
	write(1, "rrr\n", 4);
}
