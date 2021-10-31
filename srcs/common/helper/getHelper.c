/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getHelper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 21:10:11 by mli               #+#    #+#             */
/*   Updated: 2021/10/31 22:24:50 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../common_static.h"

const t_helper	*get_helper(t_stack_type type)
{
	static const t_helper	helper[2] = {
		{STACK_A, STACK_DIR_A, get_top_a, get_end_a, get_size_a, get_edge_a},
		{STACK_B, STACK_DIR_B, get_top_b, get_end_b, get_size_b, get_edge_b},
	};

	return (&helper[type]);
}
