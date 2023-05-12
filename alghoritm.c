/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alghoritm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaviobiondo <flaviobiondo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:04:01 by flaviobiond       #+#    #+#             */
/*   Updated: 2023/05/11 18:13:07 by flaviobiond      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_bin(int n)
{
	int	i;

	i = 0;
	while (++i && n)
		n /= 2;
	return (i);
}

void    radix(t_stack *a, t_stack *b)
{
    int n;
    int k;
    int i;

    k = -1;
    n = ft_bin(a->element);
    while(++k < n - 1)
    {
        i = a->element;
        while(--i >= 0)
        {
            if((a->array[0] >> k) % 2 == 1)
                ra(a, 1);
            else
                pb(a, b);
        }
        while(b->element > 0)
            pa(a, b);
    }
}

