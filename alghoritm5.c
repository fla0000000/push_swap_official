/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alghoritm5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaviobiondo <flaviobiondo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 20:04:03 by flaviobiond       #+#    #+#             */
/*   Updated: 2023/05/08 16:28:45 by flaviobiond      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algorith(t_stack *a, t_stack *b)
{
	if(a->totelement == 2)
		ft_two(a);
	else if(a->totelement == 3)
		ft_three(a);
	else if(a->totelement == 5)
		ft_five(a, b);
	else if(a->totelement <= 500)
		ft_centos(a, b);
	//free(b);
}

void	ft_five(t_stack *a, t_stack *b)
{
	if(a->element == 5)
    {
    ft_min_swap_first_element(a);
	pb(a, b);
	ft_min_swap_first_element(a);
	pb(a, b);
	ft_three(a);
	pa(a, b);
	pa(a, b);
    }
}
