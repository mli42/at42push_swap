/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:52:23 by mli               #+#    #+#             */
/*   Updated: 2021/11/01 11:19:12 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"
#include "common_static.h"

static void	populate(t_stack *stack, const char **argv)
{
	int	i;
	int	j;
	int	tmp;

	i = -1;
	j = stack->size;
	while (argv[++i])
	{
		while (*argv[i])
		{
			if (ft_atoi_boolptr(&argv[i], &tmp) != 1)
				break ;
			stack->data[--j] = tmp;
		}
	}
}

t_bool	ft_parse(t_stack *stack, const char **argv)
{
	const int	count = parse_count(argv);

	if (count == -1)
		return (false);
	stack->data = ft_memalloc(sizeof(int) * count);
	if (stack->data == NULL)
		return (false);
	stack->sep = count;
	stack->size = count;
	populate(stack, argv);
	return (true);
}
