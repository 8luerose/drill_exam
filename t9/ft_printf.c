/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:14:46 by taehkwon          #+#    #+#             */
/*   Updated: 2023/11/27 20:59:31 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	va_list ap;
	int bytes;
	int i;

	va_start(ap, format);
	bytes = 0;
	i = 0;

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