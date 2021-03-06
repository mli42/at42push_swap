/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 16:11:25 by mli               #+#    #+#             */
/*   Updated: 2021/10/31 17:45:19 by mli              ###   ########.fr       */
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
int	ft_atoi_check(const char *const str)
{
	const char *tmp = str;

	return (ft_atoi_checkptr(&tmp));
}
