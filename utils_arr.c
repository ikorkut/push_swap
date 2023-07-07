/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_arr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikorkut <ikorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:11:50 by ikorkut           #+#    #+#             */
/*   Updated: 2023/05/31 14:11:51 by ikorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_array_push(int *arr, int size, int value)
{
	arr[size] = value;
}

void	ft_array_swap(int *arr, int size)
{
	int	tmp;

	if (size-- < 2)
		return ;
	tmp = arr[size];
	arr[size] = arr[size - 1];
	arr[size - 1] = tmp;
}

void	ft_array_rotate(int *arr, int size)
{
	int	tmp;

	size--;
	tmp = arr[size];
	while (size > 0)
	{
		arr[size] = arr[size - 1];
		size--;
	}
	arr[0] = tmp;
}

void	ft_array_revrotate(int *arr, int size)
{
	int	i;
	int	tmp;

	tmp = arr[0];
	i = 1;
	while (i < size)
	{
		arr[i - 1] = arr[i];
		i++;
	}
	arr[size - 1] = tmp;
}
