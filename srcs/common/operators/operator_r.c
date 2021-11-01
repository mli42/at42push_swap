/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_r.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:13:16 by mli               #+#    #+#             */
/*   Updated: 2021/11/01 13:57:29 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../common_static.h"

static void	operator_r(t_stack *stack, t_stack_type type)
{
	const t_helper		*helper = get_helper(type);
	const t_stack_dir	dir = helper->dir;
	int					*it[2];
	int					*next;
	int					top_value;

	if (helper->get_size(stack) < 2)
		return ;
	it[0] = helper->get_top(stack);
	it[1] = helper->get_end(stack) - dir;
	top_value = *it[0];
	while (it[0] != it[1])
	{
		next = it[0] + dir;
		*it[0] = *next;
		it[0] = next;
	}
	*it[0] = top_value;
}

void	ra(t_stack *stack)
{
	operator_r(stack, STACK_A);
}

void	rb(t_stack *stack)
{
	operator_r(stack, STACK_B);
}

void	rr(t_stack *stack)
{
	ra(stack);
	rb(stack);
}
