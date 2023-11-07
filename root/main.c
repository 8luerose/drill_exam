/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:51:30 by taehkwon          #+#    #+#             */
/*   Updated: 2023/11/07 16:16:14 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
int main(void)
{
	char *str;
	int i;
	unsigned int j;

	str = "hello world";
	i = 42;
	j = 16;

	// int num1 = ft_printf("%s", str);
	int num1 = ft_printf("%");
	printf("%d\n", num1);
	printf("\n");
	int num2 = printf("%s", str);
	printf("%d %d\n", num1, num2);
	printf("\n");
	int num3 = ft_printf("%d", 123456);
	printf("\n");
	int num4 = printf("%d", 123456);
	printf("\n");
	printf("%d %d\n", num3, num4);
	int num5 = ft_printf("%x", 123123123);
	printf("\n");
	int num6 = printf("%x", 123123123);
	printf("%d %d\n", num5, num6);
	ft_printf("a1a1a1a1a1a1a1a1\n");
	// ft_printf(0);
	printf("a1a1a1a1a1a1a1a1\n");
	// printf(0);
	return (0);
}