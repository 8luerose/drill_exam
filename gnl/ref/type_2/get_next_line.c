/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuseo <yuseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:15:54 by yuseo             #+#    #+#             */
/*   Updated: 2023/02/04 14:37:09 by yuseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char			*line;
	static t_info	info;

	line = NULL;
	if (info.buf == NULL)
	{
		info.buf = malloc(sizeof(*(info.buf)) * (BUFFER_SIZE + 1));
		if (info.buf == NULL)
			return (NULL);
	}
	gnl_get_line(fd, &line, &info);
	if (info.rbytes == -1)
	{
		free(line);
		line = NULL;
	}
	if (info.rbytes == 0 || info.rbytes == -1 || line == NULL)
	{
		free(info.buf);
		info.buf = NULL;
		info.idx = 0;
		info.rbytes = 0;
	}
	return (line);
}
