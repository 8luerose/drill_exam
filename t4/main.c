/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:57:14 by taehkwon          #+#    #+#             */
/*   Updated: 2023/10/23 22:58:13 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	char *str;
	int i;
	unsigned int j;

	str = "hello world";
	i = 40;
	j = 16;

	ft_printf("%s %d %x\n",str, i, j);
	return (0);
}