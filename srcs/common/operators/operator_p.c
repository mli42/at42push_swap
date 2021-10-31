/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 21:57:20 by mli               #+#    #+#             */
/*   Updated: 2021/10/31 23:00:11 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../common_static.h"

static void	operator_p(t_stack *stack, t_stack_type other_type)
{
	const t_helper	*other_helper = get_helper(other_type);

	if (other_helper->get_size(stack) == 0)
		return ;
	stack->sep += other_helper->dir;
}

void	pa(t_stack *stack)
{
	operator_p(stack, STACK_B);
}

void	pb(t_stack *stack)
{
	operator_p(stack, STACK_A);
}
