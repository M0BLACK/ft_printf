/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhlou <bmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:16:18 by bmakhlou          #+#    #+#             */
/*   Updated: 2022/11/05 00:32:14 by bmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printf_formats(va_list args, const char s, int *index)
{
	if (s == '%')
		ft_putchar('%', index);
	else if (s == 'd' || s == 'i')
		ft_putnbr(va_arg(args, int), index);
	else if (s == 'u')
		ft_putnbr_u(va_arg(args, int), index);
	else if (s == 'c')
		ft_putchar(va_arg(args, int), index);
	else if (s == 'x' || s == 'X')
		ft_print_hex(va_arg(args, unsigned int), s, index);
	else if (s == 's')
		ft_putstr(va_arg(args, char *), index);
	else if (s == 'p')
		ft_memory(va_arg(args, const void *), index);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, s);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == '%' )
		{
			i++;
			ft_printf_formats(args, s[i], &count);
		}
		else
			ft_putchar(s[i], &count);
		i++;
	}
	va_end(args);
	return (count);
}
