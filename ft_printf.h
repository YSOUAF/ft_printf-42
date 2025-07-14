/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprintf.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysouaf <ysouaf@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-30 18:59:18 by ysouaf            #+#    #+#             */
/*   Updated: 2024-11-30 18:59:18 by ysouaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putnbr(int nbr);
int	ft_putchar(char c);
int	ft_puthex(unsigned int nbr, char *hex);
int	ft_putstr( char *str);
int	ft_printf(const char *format, ...);
int	ft_format(char character, va_list var);
int	ft_putptr(void *ptr);
int	ft_un_putnbr(unsigned int n);

#endif