/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorinda <cdorinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:03:31 by marvin            #+#    #+#             */
/*   Updated: 2021/10/20 17:10:14 by cdorinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;

	i = 0;
	str = (const char *) s;
	if (c > 256)
		c -= 256;
	while (i < n)
	{
		if (str[i] == c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
