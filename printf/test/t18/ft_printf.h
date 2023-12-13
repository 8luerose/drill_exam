/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:06:49 by taehkwon          #+#    #+#             */
/*   Updated: 2023/12/12 12:08:51 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int ft_printf(const char *format, ...);
void check(char c, va_list *ap, int *bytes);
void ft_putchar(char c, int *bytes);
void ft_putstr(char *str, int *bytes);
void ft_print_number(long n, char *base_arr, int len, int *bytes);

#endif