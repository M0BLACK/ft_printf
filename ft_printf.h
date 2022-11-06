/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhlou <bmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 23:43:29 by bmakhlou          #+#    #+#             */
/*   Updated: 2022/11/04 22:12:26 by bmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include<unistd.h>

void	ft_putnbr(int n, int *index);
void	ft_putnbr_u(unsigned int nb, int *index);
void	ft_putstr(const char *s, int *index);
void	ft_putchar(char c, int *index);
void	ft_print_hex(unsigned int n, char type, int *index);
void	ft_print_p(unsigned long int n, int *index);
void	ft_memory(const void *ptr, int *index);
int		ft_printf(const char *s, ...);
#endif
