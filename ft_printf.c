/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:50:17 by pibreiss          #+#    #+#             */
/*   Updated: 2024/11/20 23:31:46 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	int		i;
	va_list	arg;

	i = -1;
	va_start(arg, format);
	while (format[++i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'd' || format[i + 1] == 'i')
			if (format[i + 1] == 'u')
			if (format[i + 1] == 'x' || format[i + 1] == 'X')
			if (format[i + 1] == 's')
			if (format[i + 1] == 'c')
				ft_putchar(va_arg(arg, char));
			if (format[i + 1] == 'p')
			if (format[i + 1] == '%')
				ft_putchar('%');
		}
		else
			ft_putchar(&format[i]);
	}
}