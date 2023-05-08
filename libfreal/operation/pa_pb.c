/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaviobiondo <flaviobiondo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 22:55:30 by flaviobiond       #+#    #+#             */
/*   Updated: 2023/04/24 17:35:09 by flaviobiond      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	int	i;

	if (b->element == 0)
		return ;
	a->element++;
	i = a->element;
	while (--i > 0)
		a->array[i] = a->array[i - 1];
	a->array[0] = b->array[0];
	b->element--;
	i = -1;
	while (++i < b->element)
		b->array[i] = b->array[i + 1];
	write(1, "pa\n", 3);
}

void	pb(t_stack *a, t_stack *b)
{
	int	i;

	if (a->element == 0)
		return ;
	b->element++;
	i = a->element;
	while (--i > 0)
		b->array[i] = b->array[i - 1];
	b->array[0] = a->array[0];
	a->element--;
	i = -1;
	while (++i < a->element)
		a->array[i] = a->array[i + 1];
	write(1, "pb\n", 3);
}
