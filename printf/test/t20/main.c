#include "ft_printf.h"

int main(void)
{
	char *str;
	int i;
	unsigned int j;

	str = "hello world";
	i = 42;
	j = 16;

	ft_pritnf("%s %d %x\n",str, i, j);
	return (0);
}