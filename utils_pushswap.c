/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_pushswap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikorkut <ikorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:20:54 by ikorkut           #+#    #+#             */
/*   Updated: 2023/05/31 14:20:55 by ikorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_data *p, char check)
{
	if (check == 'a')
	{
		ft_array_push(p->arr_a, p->a_size++, p->arr_b[p->b_size-- - 1]);
		ft_putstr("pa\n");
	}
	else
	{
		ft_array_push(p->arr_b, p->b_size++, p->arr_a[p->a_size-- - 1]);
		ft_putstr("pb\n");
	}
}

void	ft_swap(t_data *p, char check)
{
	if (check == 'a')
	{
		ft_array_swap(p->arr_a, p->a_size);
		ft_putstr("sa\n");
	}
	else if (check == 'b')
	{
		ft_array_swap(p->arr_b, p->b_size);
		ft_putstr("sb\n");
	}
	else if (check == 'x')
	{
		ft_array_swap(p->arr_a, p->a_size);
		ft_array_swap(p->arr_b, p->b_size);
		ft_putstr("ss\n");
	}
}

void	ft_rotate(t_data *p, char check)
{
	if (check == 'a')
	{
		ft_array_rotate(p->arr_a, p->a_size);
		ft_putstr("ra\n");
	}
	else if (check == 'b')
	{
		ft_array_rotate(p->arr_b, p->b_size);
		ft_putstr("rb\n");
	}
	else if (check == 'x')
	{
		ft_array_rotate(p->arr_a, p->a_size);
		ft_array_rotate(p->arr_b, p->b_size);
		ft_putstr("rr\n");
	}
}

void	ft_revrotate(t_data *p, char check)
{
	if (check == 'a')
	{
		ft_array_revrotate(p->arr_a, p->a_size);
		ft_putstr("rra\n");
	}
	else if (check == 'b')
	{
		ft_array_revrotate(p->arr_b, p->b_size);
		ft_putstr("rrb\n");
	}
	else if (check == 'x')
	{
		ft_array_revrotate(p->arr_a, p->a_size);
		ft_array_revrotate(p->arr_b, p->b_size);
		ft_putstr("rrr\n");
	}
}
