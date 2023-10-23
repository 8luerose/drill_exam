/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 21:34:57 by taehkwon          #+#    #+#             */
/*   Updated: 2023/10/23 22:00:15 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#ifndef -> 먼저
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

# include <stdio.h>

void	ft_putchar(char c, int *bytes);
void	ft_putstr(char *str, int *bytes);
void	ft_print_number(long n, char *base_arr, int len, int *bytes);
int		ft_printf(const char *format, ...);

#endif