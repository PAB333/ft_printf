/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:36:01 by pibreiss          #+#    #+#             */
/*   Updated: 2024/11/21 16:12:44 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putexa_ptr(unsigned long nb, int *count)
{
	if (nb >= 16)
	{
		ft_putexa_ptr(nb / 16, count);
		ft_putexa_ptr(nb % 16, count);
	}
	else
	{
		if (nb < 10)
			ft_putchar(nb + 48, count);
		else
			ft_putchar(nb - 10 + 'a', count);
	}
}

void	ft_putptr(void *ptr, int *count)
{
	unsigned long	adress;

	if (ptr == 0)
		ft_putstr("(nil)", count);
	else
	{
		adress = (unsigned long)ptr;
		ft_putstr("0x", count);
		ft_putexa_ptr(adress, count);
	}
}