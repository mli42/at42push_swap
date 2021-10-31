/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_top_end.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 21:24:13 by mli               #+#    #+#             */
/*   Updated: 2021/10/31 21:43:02 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../common_static.h"

int	*get_top_a(t_stack *stack)
{
	return (stack->data + (stack->sep - 1));
}

int	*get_top_b(t_stack *stack)
{
	return (stack->data + stack->sep);
}

int	*get_end_a(t_stack *stack)
{
	return (stack->data - 1);
}

int	*get_end_b(t_stack *stack)
{
	return (stack->data + stack->size);
}
