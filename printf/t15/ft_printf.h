/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 22:24:13 by taehkwon          #+#    #+#             */
/*   Updated: 2023/12/03 22:26:51 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int ft_printf(const char *format, ...);
void check(char c, va_list ap, int *bytes);
void ft_putchar(char c, int *bytes);
void ft_putstr(char *str, int *bytes);
void ft_print_number(long n, char *base_arr, int len, int *bytes);

#endif