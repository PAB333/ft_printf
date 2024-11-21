/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:34:01 by pibreiss          #+#    #+#             */
/*   Updated: 2024/11/21 16:12:20 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putexa_lcase(unsigned int nb, int *count)
{
	if (nb >= 16)
	{
		ft_putexa_lcase(nb / 16, count);
		ft_putexa_lcase(nb % 16, count);
	}
	else
	{
		if (nb < 10)
			ft_putchar(nb + 48, count);
		else
			ft_putchar(nb - 10 + 'a', count);
	}
}

void	ft_putexa_ucase(unsigned int nb, int *count)
{
	if (nb >= 16)
	{
		ft_putexa_ucase(nb / 16, count);
		ft_putexa_ucase(nb % 16, count);
	}
	else
	{
		if (nb < 10)
			ft_putchar(nb + 48, count);
		else
			ft_putchar(nb - 10 + 65, count);
	}
}
