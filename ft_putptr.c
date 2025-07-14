/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysouaf <ysouaf@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-30 20:00:59 by ysouaf            #+#    #+#             */
/*   Updated: 2024-11-30 20:00:59 by ysouaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexptr(unsigned long n, char *hex)
{
	int		count;

	count = 0;
	if (n >= 16)
		count += ft_puthexptr(n / 16, hex);
	count += ft_putchar(hex[n % 16]);
	return (count);
}

int	ft_putptr(void *ptr)
{
	ft_putstr("0x");
	return (2 + ft_puthexptr((unsigned long)ptr, "0123456789abcdef"));
}
