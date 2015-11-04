/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plisieck <plisieck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 13:01:10 by plisieck          #+#    #+#             */
/*   Updated: 2014/11/30 22:18:35 by plisieck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned char	*s;
	int				neg;
	int				result;

	neg = 1;
	result = 0;
	s = (unsigned char *)str;
	while (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\f' || *s == '\v' ||
			*s == '\r')
		s++;
	if (*s == '-')
		neg = -1;
	if (*s == '+' || *s == '-')
		s = s + 1;
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + *s - 48;
		s++;
	}
	result = result * neg;
	return (result);
}
