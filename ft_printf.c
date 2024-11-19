/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:50:17 by pibreiss          #+#    #+#             */
/*   Updated: 2024/11/19 12:17:37 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	size_t	i;
	va_list	arg;

	i = -1;
	va_start(arg, format);
	while (format[++i])
	{
		if (format[i] == '%' && format[i + 1] == 'd')
			
	}
}