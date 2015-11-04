/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plisieck <plisieck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 23:00:21 by plisieck          #+#    #+#             */
/*   Updated: 2014/11/18 14:19:53 by plisieck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if (size >= SIZE_MAX)
		return (NULL);
	str = ft_memalloc(size + 1);
	if (str == NULL)
		return (NULL);
	return (str);
}
