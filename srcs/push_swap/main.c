/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:55:57 by mli               #+#    #+#             */
/*   Updated: 2021/10/31 22:48:31 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

int	main(int argc, const char **argv)
{
	t_stack	stack;

	ft_bzero(&stack, sizeof(stack));
	if (argc < 2 || ft_parse(&stack, &argv[1]) == false)
		ft_exit();
	print_stack(&stack);
	ft_free((void **)&stack.data);
	return (0);
}
