/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdorinda <cdorinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:05:44 by marvin            #+#    #+#             */
/*   Updated: 2021/10/20 17:13:26 by cdorinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_ispace(const char *str)
{
	while (((*str == ' ') || (*str == '\t') || (*str == '\n')
			 || (*str == '\v') || (*str == '\f') || (*str == '\r')))
		str++;
	return ((char *)str);
}

int	ft_atoi(const char *str)
{
	int			sign;
	long int	n;
	long int	tmp;

	n = 0;
	sign = 1;
	str = ft_ispace(str);
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		tmp = n;
		n = n * 10 + sign * (*str - '0');
		if (sign == 1 && tmp > n)
			return (-1);
		else if (sign == -1 && tmp < n)
			return (0);
		str++;
	}
	return (n);
}
