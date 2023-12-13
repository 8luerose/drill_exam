/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 04:59:25 by taehkwon          #+#    #+#             */
/*   Updated: 2023/10/31 05:00:36 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	char *str;
	int i;
	unsigned int j;

	str = "hello world";
	i = 42;
	j = 16;

	ft_printf("%s %d %x\n", str, i, j);
	return (0);
}