/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plisieck <plisieck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 15:23:47 by plisieck          #+#    #+#             */
/*   Updated: 2014/11/15 15:23:50 by plisieck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	j = 0;
	i = 0;
	if (!s2[0])
		return ((char*)s1);
	while (s1[i] && i < n)
	{
		if (s1[i] == s2[j])
			j++;
		else
			j = 0;
		if (!s2[j])
			return ((char *)s1 + (i - (j - 1)));
		i++;
	}
	return (NULL);
}
