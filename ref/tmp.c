#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int num)
{
    long long l_num;

    l_num = (long long)num;
    if (l_num < 0)
    {
        ft_putchar('-');
        l_num *= -1;
    }
    if (l_num >= 10)
    {
        ft_putnbr(l_num / 10);
        l_num = l_num % 10;
    }
    if (l_num < 10){
        ft_putchar(l_num + '0');
    }
}
void ft_recul(unsigned int num)
{
    if (num == 0)
        return ;
    ft_recul(num / 16);
    ft_putchar("0123456789abcdef"[num % 16]);
}

void ft_unsigned(unsigned int num)
{
    if (num == 0)
        return ;
    ft_recul(num);
}

#include <stdio.h>

int main(void)
{
    int a = 0;
    // int b = 0xab;
	int b = 0;

    ft_putnbr(a);
    printf("\n");
    ft_unsigned(b);

	printf("%d %s %x", 10, "hello", 0);
}