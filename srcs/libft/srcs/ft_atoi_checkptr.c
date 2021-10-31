/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_checkptr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 16:11:25 by mli               #+#    #+#             */
/*   Updated: 2021/10/31 18:20:11 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
 * Returns:
 * * -1 on error,
 * * 0 if no number
 * * 1 otherwise
 * The number isn't parsed
 * Move the pointer
 */
int	ft_atoi_checkptr(const char **const str)
{
	int	has_number;
	int	has_sign;

	has_sign = 0;
	has_number = 0;
	while (ft_isspace(**str))
		(*str)++;
	if (**str == '+' || **str == '-')
	{
		has_sign = 1;
		(*str)++;
	}
	while (ft_isdigit(**str))
	{
		if (has_number == 0)
			has_number = 1;
		(*str)++;
	}
	if ((**str != '\0' && !ft_isspace(**str)) \
		|| (has_number == 0 && has_sign == 1))
		return (-1);
	if (has_number == 0)
		return (0);
	return (1);
}
