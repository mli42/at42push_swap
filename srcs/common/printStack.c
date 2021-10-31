/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printStack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 16:25:20 by mli               #+#    #+#             */
/*   Updated: 2021/10/31 18:43:18 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./common.h"

void	print_stack(t_stack stack)
{
	int			i;
	const char	pipe = '|';
	const char	sep = ' ';

	i = 0;
	while (i < stack.size)
	{
		if (stack.sep == i)
			printf("%c", pipe);
		else if (i != 0)
			printf("%c", sep);
		printf("%d", stack.data[i++]);
	}
	if (stack.sep == i)
		printf("%c", pipe);
	printf("\n");
}
