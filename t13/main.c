/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:17:10 by taehkwon          #+#    #+#             */
/*   Updated: 2023/12/04 22:32:44 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	char *str;
	int i;
	unsigned j;

	str = "hello world";
	i = 42;
	j = 16;

	ft_printf("%s %d %x\n", str, i, j);
	return (0);
}