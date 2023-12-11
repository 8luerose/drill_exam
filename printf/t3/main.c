/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 21:34:47 by taehkwon          #+#    #+#             */
/*   Updated: 2023/10/23 22:01:20 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	char *str;
	int i;
	unsigned j;
	int cnt;


	str = "hello world";
	i = 42;
	j = 16;

	cnt = ft_printf("%s %d %x", str, i, j);
	printf("\n%d\n", cnt);
	return (0);
}