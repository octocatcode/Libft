/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorinda <cdorinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:01:57 by marvin            #+#    #+#             */
/*   Updated: 2021/10/20 17:11:42 by cdorinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = 0;
	if (c > 256)
		c -= 256;
	while (s[i])
	{
		if (s[i] == c)
			str = (char *)(s + i);
		i++;
	}
	if (s[i] == c)
		str = (char *)(s + i);
	return (str);
}
