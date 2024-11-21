/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:29:54 by pibreiss          #+#    #+#             */
/*   Updated: 2024/11/21 16:11:52 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *count)
{
	int	i;

	i = -1;
	if (str == NULL)
		ft_putstr("(null)", count);
	else
	{
		while (str[++i])
			write(1, &str[i], 1);
		*count += i;
	}
}
