/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhlou <bmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 08:45:44 by bmakhlou          #+#    #+#             */
/*   Updated: 2022/11/01 04:41:14 by bmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned int nb, int *index)
{
	if (nb > 9)
	{
		ft_putnbr_u(nb / 10, index);
		ft_putnbr_u(nb % 10, index);
	}
	else
		ft_putchar(nb + 48, index);
}
