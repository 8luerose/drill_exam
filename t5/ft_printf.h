/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 04:44:12 by taehkwon          #+#    #+#             */
/*   Updated: 2023/10/31 04:48:36 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

void	ft_putchar(char c, int *bytes);
void	ft_putstr(char *str, int *bytes);
void	ft_print_number(long n, char *base_arr, int len, int *bytes);
int		ft_printf(const char *format, ...);

#endif