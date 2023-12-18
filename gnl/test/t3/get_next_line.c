#define BUFFER_SIZE 42

#include <stdlib.h>
#include <unistd.h>

typedef struct s_info
{
	char *buf;
	int idx; // latest new line's index
	int rb; // read bytes
} t_info;

int _strchr(char *s, char c)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return i;
	}

	return -1;
}

char *strnjoin(char *s1, char *s2, int n)
{
	int len;
	for (len = 0; s1 != NULL && s1[len] != '\0'; len++)
		;
	
	char *s = malloc(sizeof(*s) * (len + n + 1));
	int i;
	for (i = 0; i < len; i++)
		s[i] = s1[i];
	for (; i - len < n && s2[i - len] != '\0'; i++)
		s[i] = s2[i - len];
	s[i] = '\0';

	free(s1);

	return s;
}

char *get_next_line(int fd)
{
	char *line = NULL;
	static t_info info;

	if (info.buf == NULL)
		info.buf = malloc(sizeof(*(info.buf)) * (BUFFER_SIZE + 1));

	int nl; // new line index
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

		nl = _strchr(info.buf + info.idx, '\n');
		if (nl != -1)
		{
			line = strnjoin(line, info.buf + info.idx, nl + 1);
			info.idx += nl + 1;
			break;
		}
		else
		{
			line = strnjoin(line, info.buf + info.idx, info.rb - info.idx);
			info.idx = info.rb;
		}
	}

	if (info.rb == 0 || line == NULL)
	{
		free(info.buf);
		info.buf = NULL;
		info.idx = 0;
		info.rb = 0;
	}

	return line;
}
