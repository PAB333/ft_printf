/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:50:17 by pibreiss          #+#    #+#             */
/*   Updated: 2024/11/21 01:02:01 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	arg;

	i = -1;
	count = 0;
	va_start(arg, format);
	while (format[++i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'd' || format[i + 1] == 'i')
				ft_putnbr((int)va_arg(arg, int), &count);
			if (format[i + 1] == 'u')
				ft_putnbr_ui((unsigned int)va_arg(arg, unsigned int), &count);
			if (format[i + 1] == 'x' || format[i + 1] == 'X')
			if (format[i + 1] == 's')
				ft_putstr(va_arg(arg, char *), &count);
			if (format[i + 1] == 'c')
				ft_putchar(va_arg(arg, int), &count);
			if (format[i + 1] == 'p')
			if (format[i + 1] == '%')
				ft_putchar('%', &count);
			i++;
		}
		else
			ft_putchar(format[i], &count);
	}
	return (count);
}
int main(void)
{
	ft_printf("test : %u", 4294967295);
	printf("%d",ft_printf("\n %u \n",4294967295));
}