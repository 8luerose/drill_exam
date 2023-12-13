/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 05:40:12 by taehkwon          #+#    #+#             */
/*   Updated: 2023/12/05 06:28:24 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int main(void)
// {
// 	char *str;
// 	int i;
// 	unsigned int j;

// 	str = "hello world";
// 	i = 42;
// 	j = 16;

// 	ft_printf("%s %d %x\n", str, i, j);
// 	return (0);
// }

int main(void)
{
	char *str;
	int i;
	unsigned int j;

	str = "hello world";
	i = 42;
	j = 16;

	ft_printf("%s %d %x\n", str, i, j);
	printf("%s %d %x\n", str, i, j);
	return (0);
}