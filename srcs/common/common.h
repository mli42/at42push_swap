/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 16:25:58 by mli               #+#    #+#             */
/*   Updated: 2021/10/31 23:00:01 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMON_H
# define COMMON_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "../libft/includes/libft.h"

// Bool

typedef enum e_bool {
	false,
	true
}	t_bool;

typedef enum e_stack_dir {
	STACK_DIR_A = -1,
	STACK_DIR_B = 1,
}	t_stack_dir;

typedef enum e_stack_type {
	STACK_A,
	STACK_B,
}	t_stack_type;

typedef struct s_stack
{
	int	*data;
	int	sep;
	int	size;
}	t_stack;

typedef struct s_stack_helper
{
	t_stack_type	type;
	t_stack_dir		dir;
	int				*(*get_top)(t_stack *stack);
	int				*(*get_end)(t_stack *stack);
	int				(*get_size)(t_stack *stack);
	int				(*get_edge)(t_stack *stack);
}	t_helper;

void			print_stack(const t_stack *const stack);
t_bool			ft_parse(t_stack *stack, const char **argv);
void			ft_exit(void);

// Helper
const t_helper	*get_helper(t_stack_type type);

// Operators

void			sa(t_stack *stack);
void			sb(t_stack *stack);
void			ss(t_stack *stack);

void			pa(t_stack *stack);
void			pb(t_stack *stack);

void			ra(t_stack *stack);
void			rb(t_stack *stack);
void			rr(t_stack *stack);

void			rra(t_stack *stack);
void			rrb(t_stack *stack);
void			rrr(t_stack *stack);

#endif
