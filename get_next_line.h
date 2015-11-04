/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plisieck <plisieck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/01 17:34:44 by plisieck          #+#    #+#             */
/*   Updated: 2014/12/01 17:46:05 by plisieck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUF_SIZE 8
# include <unistd.h>
# include <stdlib.h>
# include "./libft/includes/libft.h"

int get_next_line(int const fd, char **line);
#endif
