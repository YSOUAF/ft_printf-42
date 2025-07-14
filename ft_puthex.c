/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysouaf <ysouaf@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-30 19:58:04 by ysouaf            #+#    #+#             */
/*   Updated: 2024-11-30 19:58:04 by ysouaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int nbr, char *hex)
{
	int	count;

	count = 0;
	if (nbr >= 16)
		count += ft_puthex(nbr / 16, hex);
	count += ft_putchar(hex[nbr % 16]);
	return (count);
}
