/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaviobiondo <flaviobiondo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:31:53 by flaviobiond       #+#    #+#             */
/*   Updated: 2023/05/15 16:42:59 by flaviobiond      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	double_numbers(t_stack *stack)
{
	int	i;
	int	j;

	i = -1;
	while (++i < stack->element)
	{
		j = i;
		while (++j < stack->element)
		{
			if (stack->array[i] == stack->array[j])
				exit(write(2, "Error\n", 6));
		}
	}
}

void	check_arg(int argc, char **argv)
{
	int	i;

	if (argc <= 1)
		exit(1);
	i = 0;
	while (argv[++i])
	{
		if (ft_atoi(argv[i]) < -2147483648 || ft_atoi(argv[i]) > 2147483647)
			exit(write(2, "Error\n", 6));
	}
}

void	init_a(t_stack *stack, char **temp1)
{
	int	i;

	i = -1;
	while (temp1[++i])
	{
		if (ft_atoi(temp1[i]) == 0 && temp1[i][0] != '0')
			exit(write(2, "Error\n", 6));
		stack->array[i] = ft_atoi(temp1[i]);
	}
}

char	**ft_supreme(int len, char **str)
{
	int		i;
	char	*swap;
	char	**swap1;

	i = 0;
	swap = (char *)malloc(sizeof(char));
	swap[0] = 0;
	while (++i < len)
	{
		swap = ft_strjoin(swap, str[i]);
		swap = ft_strjoin(swap, " ");
	}
	swap1 = ft_split(swap, 32);
	free(swap);
	return (swap1);
}

void	check_counter(int len, char **str, t_stack *a)
{
	char	**count;
	int		i;

	i = 0;
	count = ft_supreme(len, str);
	while (count[++i])
		;
	a->element = i;
	a->totelement = i;
	a->array = (int *)malloc(i * sizeof(int));
	init_a(a, count);
	i = -1;
	while (count[++i])
		free(count[i]);
	free(count);
}
