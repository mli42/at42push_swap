/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 16:50:09 by mli               #+#    #+#             */
/*   Updated: 2021/11/01 16:55:22 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

static int	integer_len(const char *str, t_bool is_negative)
{
	const char	*tmp = str;

	if (is_negative)
		++str;
	while (ft_isdigit(*str))
		++str;
	return (str - tmp);
}

/*
 * Return -1 on error, 1 otherwise
 */
int	is_integer(const char *str)
{
	int		i;
	int		len;
	int		cmp;
	t_bool	is_negative;

	i = 0;
	is_negative = false;
	while (ft_isspace(*str))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
		is_negative = true;
	len = integer_len(str, is_negative);
	if ((!is_negative && len > 10) || (is_negative && len > 11))
		return (-1);
	if ((!is_negative && len < 10) || (is_negative && len < 11))
		return (1);
	if (is_negative)
		cmp = ft_strncmp(str, "-2147483648", len);
	else
		cmp = ft_strncmp(str, "2147483647", len);
	if (cmp >= 1)
		return (-1);
	return (1);
}
