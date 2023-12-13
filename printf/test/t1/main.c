/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 20:24:33 by taehkwon          #+#    #+#             */
/*   Updated: 2023/10/23 20:27:45 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	char *str;
	int i;
	unsigned int j;


	str = "hello world";
	i = 42;
	j = 16;
	
	ft_printf("%s %d %x", str, i, j);
	return (0);
}