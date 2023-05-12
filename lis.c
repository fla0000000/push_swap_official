/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaviobiondo <flaviobiondo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:22:26 by flaviobiond       #+#    #+#             */
/*   Updated: 2023/05/11 16:44:40 by flaviobiond      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "push_swap.h"

// static int	binarysearch(int arr[], int l, int r, int key)
// {
// 	int	m;

// 	while (r - l > 1)
// 	{
// 		m = l + (r - l) / 2;
// 		if (arr[m] >= key)
// 			r = m;
// 		else
// 			l = m;
// 	}
// 	return (r);
// }

// t_stack	generate_lis(int *arr, int n)
// {
// 	int		*tailtable;
// 	int		*previndex;
// 	int		len;
// 	int		i;
// 	int		index;
// 	t_stack	*lis;

// 	tailtable = (int *)malloc(n * sizeof(int));
// 	previndex = (int *)malloc(n * sizeof(int));
// 	len = 1;
// 	tailtable[0] = arr[0];
// 	i = 0;
// 	while (++i < n)
// 	{
// 		if (arr[i] < tailtable[0])
// 			tailtable[0] = arr[i];
// 		else if (arr[i] > tailtable[len - 1])
// 		{
// 			tailtable[len++] = arr[i];
// 			previndex[i] = len - 2;
// 		}
// 		else
// 		{
// 			index = binarysearch(tailtable, -1, len - 1, arr[i]);
// 			tailtable[index] = arr[i];
// 			previndex[i] = index - 1;
// 		}
// 	}
// 	lis->element = lis;
// 	lis->array = tailtable;
// 	free(previndex);
// }

// void    push_lis(t_stack *a, t_stack *b, t_stack *lis)
// {
//     int i;
//     int j;

//     i = -1;
//     while(++i < a->element)
//     {
// 		j = -1;
//         while(++j < lis->element)
// 		if (a->array[i] != lis->array[j])
		
//     }
// }
// // Stampa della LIS generata
// // printf("Longest Increasing Subsequence: ");
// //int j = prevIndex[n - 1];
// // i = 0;
// // while (i < len) {
// //     printf("%d ", tailTable[i]);
// //     i++;
// //j = prevIndex[j];
// // }

// // free(tailTable);
// // Deallocazione della memoria allocata per la tabella della LIS
// // free(prevIndex);
// // Deallocazione della memoria allocata per la tabella degli indici precedenti