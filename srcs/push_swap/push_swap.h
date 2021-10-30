/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:46:40 by mli               #+#    #+#             */
/*   Updated: 2021/10/30 17:51:09 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "../libft/includes/libft.h"

// Bool

typedef enum e_bool {
	false,
	true
}	t_bool;

typedef struct s_stack
{
	int	*data;
	int	start_a;
	int	start_b;
	int	size;
}	t_stack;

t_bool	ft_parse(t_stack *stack, int argc, char **argv);
void	ft_exit(void);

#endif
