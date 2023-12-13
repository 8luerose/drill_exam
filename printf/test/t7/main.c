/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 04:59:25 by taehkwon          #+#    #+#             */
/*   Updated: 2023/11/20 20:59:26 by taehkwon         ###   ########.fr       */
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
	// printf("%s %d %x\n", str, i, j);

	//test
	// ft_printf("%s %d %x %e\n", str, i, j, i);
	// printf("%s %d %x %e\n", str, i, j, i);
	
	// str = 0;

	// ft_printf("%s %d %x\n", str, i, j);
	return (0);
}