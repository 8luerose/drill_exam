/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 22:24:11 by taehkwon          #+#    #+#             */
/*   Updated: 2023/12/03 22:37:00 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putchar(char c, int *bytes)
{
	int write_len;
	
	write_len = write(1, &c, 1);
	if (write_len == -1)
	{
		*bytes = -1;
		return ;
	}
	else
		(*bytes)++;
}

void ft_putstr(char *str, int *bytes)
{
	size_t i;

	if (str == 0)
	{
		ft_putstr("(null)", bytes);
		return ;
	}
	else
	{
		i = 0;
		while (str[i])
		{
			ft_putchar(str[i], bytes);
			if (*bytes == -1)
				return ;
			i++;
		}
	}
}

void ft_print_number(long n, char *base_arr, int len, int *bytes)
{
	char c;
	long long nb;

	nb = (long long)n;
	if (nb < 0)
	{
		ft_putchar('-', bytes);
		nb = -nb;
	}
	if (*bytes == -1)
		return ;
	if (nb >= len)
		ft_print_number(nb / len, base_arr, len, bytes);
	if (*bytes == -1)
		return ;

	c = base_arr[nb % len];
	ft_putchar(c, bytes);
	if (*bytes == -1)
		return ;
}

void check(char c, va_list ap, int *bytes)
{
	if (c == 's')
		ft_putstr((char *)va_arg(ap, char *), bytes);
	else if (c == 'd')
		ft_print_number(va_arg(ap, int), "0123456789", 10, bytes);
	else if (c == 'x')
		ft_print_number(va_arg(ap, unsigned int), "0123456789abcdef", 16, bytes);
	else
		*bytes = -1;
}

int ft_printf(const char *format, ...)
{
	va_list ap;
	int i;
	int bytes;

	va_start(ap, format);
	i = 0;
	bytes = 0;

	while (format[i])
	{
		if (format[i] == '%')
			check(format[++i], ap, &bytes);
		else
			ft_putchar(format[i], &bytes);
		if (bytes == -1)
		{
			va_end(ap);
			return (bytes);
		}
		i++;
	}
	va_end(ap);
	return (bytes);
}