/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaviobiondo <flaviobiondo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 16:32:08 by flaviobiond       #+#    #+#             */
/*   Updated: 2023/05/12 15:41:13 by flaviobiond      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libfreal/libft.h"
# include <stdio.h>
# include <stdlib.h>

typedef struct s_stack
{
	int	element;
	int	*array;
	int	totelement;
	int *num;
}		t_stack;

void	ft_three(t_stack *a);
int		ft_max(t_stack *a);
int		ft_min(t_stack *a);
void	ft_min_swap_first_element(t_stack *a);
void	ft_five(t_stack *a, t_stack *b);
void	ft_print_number(t_stack *a, t_stack *b);
void	check_counter(int len, char **str, t_stack *a);
char	**ft_supreme(int len, char **str);
void	init_a(t_stack *stack, char **temp1);
void	check_arg(int argc, char **argv);
void	double_numbers(t_stack *stack);
void	ft_two(t_stack *a);
void	algorith(t_stack *a, t_stack *b);
void	ft_centos(t_stack *a, t_stack *b);
void	ft_four(t_stack *a, t_stack *b);
void    radix(t_stack *a, t_stack *b);

void	pb(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rb(t_stack *b, int j);
void	ra(t_stack *a, int j);
void	ss(t_stack *a, t_stack *b);
void	sb(t_stack *b, int j);
void	sa(t_stack *a, int j);
void	rrb(t_stack *b, int j);
void	rrr(t_stack *a, t_stack *b);
void	rra(t_stack *a, int j);

#endif