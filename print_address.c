/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 00:35:17 by oubelhaj          #+#    #+#             */
/*   Updated: 2022/11/04 10:03:36 by oubelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_address(unsigned long nb, int i, int *count)
{
	char	*base;

	base = "0123456789abcdef";
	if (i == 1)
	{
		ft_putstr("0x", count);
		i = 0;
	}
	if (nb < 16)
		ft_putchar(base[nb % 16], count);
	else
	{
		print_address(nb / 16, 0, count);
		print_address(nb % 16, 0, count);
	}
}
