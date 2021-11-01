/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_boolptr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 16:11:25 by mli               #+#    #+#             */
/*   Updated: 2021/11/01 11:39:29 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static void	parse_sign(const char **const str, int *sign, int *has_sign)
{
	if (**str == '+' || **str == '-')
	{
		if (**str == '-')
			*sign = -1;
		*has_sign = 1;
		(*str)++;
	}
}

/*
 * Returns:
 * * -1 on error,
 * * 0 if no number
 * * 1 otherwise
 * Move the pointer while parsing
 * *res is dereferenced only if atoi returns 1
 */
int	ft_atoi_boolptr(const char **const str, int *res)
{
	int	has_number;
	int	has_sign;
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	has_sign = 0;
	has_number = 0;
	while (ft_isspace(**str))
		(*str)++;
	parse_sign(str, &sign, &has_sign);
	if (ft_isdigit(**str))
		has_number = 1;
	while (ft_isdigit(**str))
		result = (10 * result) + *(*str)++ - '0';
	if ((**str != '\0' && !ft_isspace(**str) && **str != '+' && **str != '-') \
		|| (has_number == 0 && has_sign == 1))
		return (-1);
	if (has_number == 0)
		return (0);
	*res = result * sign;
	return (1);
}
