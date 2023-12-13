/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuseo <yuseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:16:13 by yuseo             #+#    #+#             */
/*   Updated: 2023/02/04 16:59:25 by yuseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

ssize_t	gnl_strchr(char *s, char c)
{
	ssize_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char	*gnl_strnjoin(char *s1, char *s2, size_t n)
{
	char	*s;
	size_t	i;
	size_t	len;

	len = 0;
	while (s1 != NULL && s1[len] != '\0')
		len++;
	s = malloc(sizeof(*s) * (len + n + 1));
	if (s != NULL)
	{
		i = 0;
		while (i < len)
		{
			s[i] = s1[i];
			i++;
		}
		while (i - len < n && s2[i - len] != '\0')
		{
			s[i] = s2[i - len];
			i++;
		}
		s[i] = '\0';
	}
	free(s1);
	return (s);
}

void	gnl_get_line(int fd, char **line, t_info *i)
{
	while (1)
	{
		if (i->idx == i->rbytes)
		{
			i->idx = 0;
			i->rbytes = read(fd, i->buf, BUFFER_SIZE);
			if (i->rbytes == 0 || i->rbytes == -1)
				break ;
			i->buf[i->rbytes] = '\0';
		}
		i->newline = gnl_strchr(i->buf + i->idx, '\n');
		if (i->newline != -1)
		{
			*line = gnl_strnjoin(*line, i->buf + i->idx, i->newline + 1);
			i->idx += i->newline + 1;
			break ;
		}
		else
		{
			*line = gnl_strnjoin(*line, i->buf + i->idx, i->rbytes - i->idx);
			i->idx = i->rbytes;
			if (*line == NULL)
				break ;
		}
	}
}
