/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:02:08 by mli               #+#    #+#             */
/*   Updated: 2021/10/30 15:32:27 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newcpy;
	size_t	i;
	size_t	s_len;

	i = 0;
	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	newcpy = (char *)ft_calloc(len + 1, sizeof(*newcpy));
	if (newcpy == NULL)
		return (NULL);
	if (start < s_len)
		while (i < len && s[start])
			newcpy[i++] = s[start++];
	return (newcpy);
}
