#include "get_next_line.h"

int ft_strchr(char *s, char c)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return i;
	}
	return (-1);
}

char *ft_strnjoin(char *s1, char *s2, int n)
{
	int len;
	for (len = 0; s1 != NULL && s1[len] != '\0'; len++)
		;
	
	char *s = malloc((len + n + 1) * sizeof(char));
	int i;
	for (i = 0; i < len; i++)
		s[i] = s1[i];
	for (; i - len < n && s2[i - len] != '\0'; i++)
		s[i] = s2[i - len];
	s[i] = '\0';

	free (s1);

	return (s);
}

char *get_next_line(int fd)
{
	char *line = NULL;
	static t_info info;

	if (info.buf == NULL)
		info.buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	
	int nl;
	while (1)
	{
		if (info.idx == info.rb)
		{
			info.idx = 0;
			info.rb = read(fd, info.buf, BUFFER_SIZE);
			if (info.rb == 0)
				break;
			info.buf[info.rb] = '\0';
		}

		nl = ft_strchr(info.buf + info.idx, '\n');
		if (nl != -1)
		{
			line = ft_strnjoin(line, info.buf + info.idx, nl + 1);
			info.idx += nl + 1;
			break;
		}
		else
		{
			line = ft_strnjoin(line, info.buf + info.idx, info.rb - info.idx);
			info.idx = info.rb;
		}
	}

	if (info.rb == 0 || line == NULL)
	{
		free(info.buf);
		info.buf = 0;
		info.idx = 0;
		info.rb = 0;
	}

	return (line);
}