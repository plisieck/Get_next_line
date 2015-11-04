/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plisieck <plisieck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 15:17:37 by plisieck          #+#    #+#             */
/*   Updated: 2014/11/13 19:50:11 by plisieck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		map[i] = f(map[i]);
		i++;
	}
	return (map);
}
