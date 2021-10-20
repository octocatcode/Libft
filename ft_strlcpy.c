/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorinda <cdorinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:58:04 by marvin            #+#    #+#             */
/*   Updated: 2021/10/20 17:13:18 by cdorinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	size_t			s;
	size_t			tmp;

	s = ft_strlen((char *) src);
	i = 0;
	if (dstsize == 0)
		return (s);
	if (s > dstsize)
	{
		tmp = s - dstsize;
		s -= tmp;
	}
	while (i < dstsize - 1 && s)
	{
		dst[i] = src[i];
		s--;
		i++;
	}
	s = ft_strlen((char *) src);
	dst[i] = 0;
	return (s);
}
