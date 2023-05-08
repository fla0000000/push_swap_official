/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaviobiondo <flaviobiondo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 16:41:42 by flaviobiond       #+#    #+#             */
/*   Updated: 2023/04/30 14:18:24 by flaviobiond      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

//swap 1° con il 2° elemento nella stack a
void	sa(t_stack *a, int j)
{
	int	swap;

	if (a->element < 2)
		return ;
	swap = a->array[0];
	a->array[0] = a->array[1];
	a->array[1] = swap;
	if(j == 1)
	write(1, "sa\n", 3);
}

void	sb(t_stack *b, int j)
{
	int	swap;

	if (b->element < 2)
		return ;
	swap = b->array[0];
	b->array[0] = b->array[1];
	b->array[1] = swap;
	if(j == 1)
	write(1, "sb\n", 3);
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a, 0);
	sb(b, 0);
	write(1, "ss\n", 3);
}
