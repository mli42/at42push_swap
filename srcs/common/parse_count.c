/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_count.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 16:50:09 by mli               #+#    #+#             */
/*   Updated: 2021/11/01 16:55:54 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common_static.h"

/*
 * Return -1 on error, otherwise the number of numbers on this line
 */
static int	count_line(const char *const line)
{
	int			count;
	int			is_fine;
	const char	*line_cpy = line;
	const char	*line_tmp;

	count = 0;
	while (*line_cpy)
	{
		line_tmp = line_cpy;
		is_fine = ft_atoi_checkptr(&line_cpy);
		if (is_fine != 1)
			break ;
		is_fine = is_integer(line_tmp);
		if (is_fine != 1)
			break ;
		++count;
	}
	if (is_fine == -1)
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
