/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:14:46 by mli               #+#    #+#             */
/*   Updated: 2021/10/31 15:54:43 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_atoi_ptr(const char **const str)
{
	int signe;
	int result;

	signe = 1;
	result = 0;
	while (ft_isspace(**str))
		(*str)++;
	if (**str == '+')
		(*str)++;
	else if (**str == '-')
	{
		signe *= -1;
		(*str)++;
	}
	while (ft_isdigit(**str))
		result = (10 * result) + *(*str)++ - '0';
	return (result * signe);
}
