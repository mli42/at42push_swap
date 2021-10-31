/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 16:25:58 by mli               #+#    #+#             */
/*   Updated: 2021/10/31 17:35:05 by mli              ###   ########.fr       */
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

typedef struct s_stack
{
	int	*data;
	int	sep;
	int	size;
}	t_stack;

void	print_stack(t_stack stack);
t_bool	ft_parse(t_stack *stack, const char **argv);
void	ft_exit(void);

#endif
