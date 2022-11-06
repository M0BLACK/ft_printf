/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhlou <bmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 04:42:57 by bmakhlou          #+#    #+#             */
/*   Updated: 2022/11/01 04:49:01 by bmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_p(unsigned long int n, int *index)
{
	if (n >= 16)
	{
		ft_print_p(n / 16, index);
		ft_print_p(n % 16, index);
	}
	else if (n <= 9)
	{
		ft_putchar(n + '0', index);
	}
	else
	{
		ft_putchar(n - 10 + 'a', index);
	}
}

void	ft_memory(const void *p, int *index)
{
	unsigned long int	adrs;

	adrs = (unsigned long int)p;
	ft_putstr("0x", index);
	ft_print_p(adrs, index);
}
