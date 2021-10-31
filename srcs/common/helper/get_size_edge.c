/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_size_edge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 21:31:09 by mli               #+#    #+#             */
/*   Updated: 2021/10/31 21:56:32 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../common_static.h"

int	get_size_a(t_stack *stack)
{
	return (stack->sep);
}

int	get_size_b(t_stack *stack)
{
	return (stack->size - stack->sep);
}

/*
 * Returns the index of end (for stack a)
 */
int	get_edge_a(t_stack *stack)
{
	(void)stack;
	return (-1);
}

/*
 * Returns the index of end (for stack b)
 */
int	get_edge_b(t_stack *stack)
{
	return (stack->size);
}
