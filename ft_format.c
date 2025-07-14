/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysouaf <ysouaf@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-01 19:37:38 by ysouaf            #+#    #+#             */
/*   Updated: 2024-12-01 19:37:38 by ysouaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char character, va_list var)
{
	if (character == 'c')
		return (ft_putchar(va_arg(var, int)));
	if (character == 'd' || character == 'i')
		return (ft_putnbr(va_arg(var, int)));
	if (character == 'p')
		return (ft_putptr(va_arg(var, void *)));
	if (character == 'x')
		return (ft_puthex(va_arg(var, unsigned int), "0123456789abcdef"));
	if (character == 'X')
		return (ft_puthex(va_arg(var, unsigned int), "0123456789ABCDEF"));
	if (character == 's')
		return (ft_putstr(va_arg(var, char *)));
	if (character == 'u')
		return (ft_un_putnbr(va_arg(var, unsigned int)));
	return (ft_putchar('%'));
}
