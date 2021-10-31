/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_count.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 16:50:09 by mli               #+#    #+#             */
/*   Updated: 2021/10/31 18:05:16 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

/*
 * Return -1 on error, otherwise the number of numbers on this line
 */
static int	count_line(const char *const line)
{
	int			count;
	int			atoi_bool;
	const char	*line_cpy = line;

	count = 0;
	while (*line_cpy)
	{
		atoi_bool = ft_atoi_checkptr(&line_cpy);
		if (atoi_bool != 1)
			break ;
		++count;
	}
	if (atoi_bool == -1)
		return (-1);
	return (count);
}

/*
 * Return -1 on error, otherwise the number of numbers
 */
int	parse_count(const char **argv)
{
	int	i;
	int	count;
	int	line_count;

	i = -1;
	count = 0;
	while (argv[++i])
	{
		line_count = count_line(argv[i]);
		if (line_count == -1)
			return (-1);
		count += line_count;
	}
	return (count);
}
