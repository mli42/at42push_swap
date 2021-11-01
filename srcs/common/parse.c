/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:52:23 by mli               #+#    #+#             */
/*   Updated: 2021/11/01 17:52:50 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"
#include "common_static.h"

static t_bool	check_duplicate(const t_stack *stack)
{
	int			i;
	int			j;
	const int	size = stack->size;

	i = -1;
	while (++i < size)
	{
		j = i;
		while (++j < size)
		{
			if (stack->data[i] == stack->data[j])
				return (false);
		}
	}
	return (true);
}

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
	if (check_duplicate(stack) == false)
	{
		ft_free((void **)&stack->data);
		return (false);
	}
	return (true);
}
