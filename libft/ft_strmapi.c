/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plisieck <plisieck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 15:39:08 by plisieck          #+#    #+#             */
/*   Updated: 2014/11/12 16:31:11 by plisieck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*map;
	int		i;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	map = ft_strdup(s);
	if (map == NULL)
		return (NULL);
	while (map[i] != '\0')
	{
		map[i] = f(i, map[i]);
		i++;
	}
	return (map);
}
