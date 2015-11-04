/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plisieck <plisieck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 21:23:27 by plisieck          #+#    #+#             */
/*   Updated: 2014/11/10 22:37:32 by plisieck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*mem;
	size_t	i;

	mem = malloc(size);
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
