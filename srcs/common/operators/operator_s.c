/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 21:57:20 by mli               #+#    #+#             */
/*   Updated: 2021/10/31 22:58:35 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../common_static.h"

static void	operator_s(t_stack *stack, t_stack_type type)
{
	const t_helper	*helper = get_helper(type);
	int *const		head = helper->get_top(stack);
	int *const		next = head + helper->dir;

	if (helper->get_size(stack) < 2)
		return ;
	ft_iswap(head, next);
}

void	sa(t_stack *stack)
{
	operator_s(stack, STACK_A);
}

void	sb(t_stack *stack)
{
	operator_s(stack, STACK_B);
}

void	ss(t_stack *stack)
{
	sa(stack);
	sb(stack);
}
