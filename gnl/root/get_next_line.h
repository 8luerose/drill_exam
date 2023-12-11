/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuseo <yuseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:15:57 by yuseo             #+#    #+#             */
/*   Updated: 2023/02/04 14:37:31 by yuseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>

typedef struct s_info
{
	char	*buf;
	ssize_t	idx;
	ssize_t	newline;
	ssize_t	rbytes;
}	t_info;

ssize_t	gnl_strchr(char *s, char c);
char	*gnl_strnjoin(char *s1, char *s2, size_t n);
void	gnl_get_line(int fd, char **line, t_info *i);

char	*get_next_line(int fd);

#endif
