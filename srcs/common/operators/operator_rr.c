/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_rr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:13:16 by mli               #+#    #+#             */
/*   Updated: 2021/11/01 13:54:04 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../common_static.h"

static void	operator_rr(t_stack *stack, t_stack_type type)
{
	const t_helper		*helper = get_helper(type);
	const t_stack_dir	dir = helper->dir;
	int					*it[2];
	int					*next;
	int					last_value;

	if (helper->get_size(stack) < 2)
		return ;
	it[0] = helper->get_top(stack);
	it[1] = helper->get_end(stack) - dir;
	last_value = *it[1];
	while (it[0] != it[1])
	{
		next = it[1] - dir;
		*it[1] = *next;
		it[1] = next;
	}
	*it[1] = last_value;
}

void	rra(t_stack *stack)
{
	operator_rr(stack, STACK_A);
}

void	rrb(t_stack *stack)
{
	operator_rr(stack, STACK_B);
}

void	rrr(t_stack *stack)
{
	rra(stack);
	rrb(stack);
}
