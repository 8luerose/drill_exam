/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 20:28:36 by taehkwon          #+#    #+#             */
/*   Updated: 2023/10/23 21:33:35 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	char *str;
	int i;
	unsigned int j;

	str = "hello wolrd";
	i = 42;
	j = 16;

	ft_printf("%s %d %x\n", str, i, j);
	return (0);
}