/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plisieck <plisieck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 16:32:45 by plisieck          #+#    #+#             */
/*   Updated: 2014/11/15 13:14:50 by plisieck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 != NULL && s2 != NULL)
	{
		if (ft_strncmp(s1, s2, n) != 0)
			return (0);
		else
			return (1);
	}
	return (0);
}
