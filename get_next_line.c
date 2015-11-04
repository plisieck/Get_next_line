/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plisieck <plisieck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/01 17:34:28 by plisieck          #+#    #+#             */
/*   Updated: 2014/12/01 17:35:40 by plisieck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char		*ft_realloc(char *str, size_t size)
{
	char	*new_str;

	new_str = (char *)malloc(sizeof(char) * size + 1);
	ft_memcpy(new_str, str, (ft_strlen(str) + 1));
	return (new_str);
}

char		*stock_buf(int const fd)
{
	int		len;
	char	buf[BUF_SIZE + 1];
	char	*buf_save;

	len = 0;
	buf_save = ft_strnew(1);
	while ((len = read(fd, buf, BUF_SIZE)) > 0)
	{
		buf[len] = '\0';
		buf_save = ft_realloc(buf_save, (len + ft_strlen(buf_save) + 1));
		if (len == BUF_SIZE)
			buf_save = ft_strcat(buf_save, buf);
		if (len < BUF_SIZE)
			buf_save = ft_strcat(buf_save, ft_strsub(buf, 0, len));
	}
	if (len == -1)
		return (NULL);
	buf_save[ft_strlen(buf_save) + 1] = '\0';
	return (buf_save);
}

static int	add(char **line, char *buf_save, int len, int i)
{
	len = len - i;
	(*line) = ft_strnew(len);
	(*line) = ft_strsub(buf_save, i, len);
	i = i + len;
	return (i);
}

void		save_lines(int *i, char **buf_save, char **line)
{
	int len;

	len = (*i);
	while ((*buf_save)[len] != '\n' && (*buf_save)[len] != '\0')
		len++;
	(*i) = add(line, (*buf_save), len, (*i));
	if ((*buf_save)[(*i)] == '\n')
		(*i)++;
	if ((*buf_save)[(*i)] == '\0')
	{
		ft_strdel(buf_save);
		(*i) = 0;
	}
}

int			get_next_line(int const fd, char **line)
{
	static int		i;
	static char		*buf_save;

	if (fd < 0 || line == NULL)
		return (-1);
	if (!buf_save)
		buf_save = stock_buf(fd);
	if (buf_save == NULL)
		return (-1);
	if (buf_save[i])
	{
		save_lines(&i, &buf_save, line);
		return (1);
	}
	ft_strdel(&buf_save);
	i = 0;
	return (0);
}
