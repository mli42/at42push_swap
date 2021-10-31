/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_bool.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 14:34:00 by mli               #+#    #+#             */
/*   Updated: 2021/10/31 16:07:36 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
 * Returns 0 on error, otherwise 1
 * The parsed number is put in `int *res_ptr`
 */
int	ft_atoi_bool(const char *str, int *res_ptr)
{
	int	i;
	int	signe;
	int	result;

	i = 0;
	signe = 1;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		signe *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
		result = (10 * result) + str[i++] - '0';
	if (str[i] != '\0' && !ft_isspace(str[i]))
		return (0);
	*res_ptr = result * signe;
	return (1);
}
