/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 21:59:56 by taehkwon          #+#    #+#             */
/*   Updated: 2023/12/11 22:15:57 by taehkwon         ###   ########.fr       */
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