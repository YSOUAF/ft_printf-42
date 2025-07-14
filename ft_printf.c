/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysouaf <ysouaf@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-30 18:37:11 by ysouaf            #+#    #+#             */
/*   Updated: 2024-11-30 18:37:11 by ysouaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(const char *form, va_list var)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (form[i])
	{
		if (form[i] == '%')
		{
			if (form[i + 1])
				count += ft_format(form[++i], var);
		}
		else
		{
			count += ft_putchar(form[i]);
		}
		i++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = print_format(format, args);
	va_end(args);
	return (count);
}
