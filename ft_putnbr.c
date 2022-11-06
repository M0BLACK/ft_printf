/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhlou <bmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 23:42:20 by bmakhlou          #+#    #+#             */
/*   Updated: 2022/11/01 04:40:40 by bmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *index)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648", index);
	}
	else if (n < 0)
	{
		ft_putchar('-', index);
		ft_putnbr(-n, index);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10, index);
		ft_putnbr(n % 10, index);
	}
	else if (n <= 9)
	{
		ft_putchar(n + '0', index);
	}
}
