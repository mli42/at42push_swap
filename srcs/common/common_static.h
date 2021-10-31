/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common_static.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 17:26:40 by mli               #+#    #+#             */
/*   Updated: 2021/10/31 21:29:57 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMON_STATIC_H
# define COMMON_STATIC_H

# include "common.h"

int		parse_count(const char **argv);
void	ft_iswap(int *a, int *b);

// Helpers
int		*get_top_a(t_stack *stack);
int		*get_top_b(t_stack *stack);

int		*get_end_a(t_stack *stack);
int		*get_end_b(t_stack *stack);

int		get_size_a(t_stack *stack);
int		get_size_b(t_stack *stack);

int		get_edge_a(t_stack *stack);
int		get_edge_b(t_stack *stack);

#endif
