/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhlou <bmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 04:42:57 by bmakhlou          #+#    #+#             */
/*   Updated: 2022/11/01 04:45:55 by bmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex(unsigned int n, char type, int *index)
{
	if (n >= 16)
	{
		ft_print_hex(n / 16, type, index);
		ft_print_hex(n % 16, type, index);
	}
	else if (n <= 9)
	{
		ft_putchar(n + '0', index);
	}
	else
	{
		if (type == 'x')
			ft_putchar(n - 10 + 'a', index);
		else if (type == 'X')
			ft_putchar(n - 10 + 'A', index);
	}
}
