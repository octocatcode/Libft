/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorinda <cdorinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:09:25 by marvin            #+#    #+#             */
/*   Updated: 2021/10/20 17:13:05 by cdorinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (ft_strlen((char *) s) < start)
		len = 0;
	if (len > (ft_strlen((char *) s) - start))
		str = (char *)malloc(sizeof(char)
				* (ft_strlen((char *) s) - start + 1));
	else
		str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
