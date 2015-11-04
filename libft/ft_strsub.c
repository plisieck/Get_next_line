/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plisieck <plisieck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 20:28:50 by plisieck          #+#    #+#             */
/*   Updated: 2014/11/30 16:53:09 by plisieck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;

	if (s == NULL || s[start] == '\0')
		return (NULL);
	str = ft_strnew(len + 1);
	i = 0;
	if (str == NULL)
		return (NULL);
	while (i < len + start)
	{
		if (i >= start)
		{
			str[i - start] = s[i];
		}
		i++;
	}
	return (str);
}
