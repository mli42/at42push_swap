/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:55:57 by mli               #+#    #+#             */
/*   Updated: 2021/10/30 17:55:38 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack;
	int		i = 0;

	if (ft_parse(&stack, argc - 1, &argv[1]) == false)
		ft_exit();
	printf("My args\n");
	while (stack.data[i])
		printf("- %d\n", stack.data[i++]);
	return (0);
}
