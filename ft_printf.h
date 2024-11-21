/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:47:08 by pibreiss          #+#    #+#             */
/*   Updated: 2024/11/21 15:50:31 by pibreiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *count);
void	ft_putstr(char *str, int *count);
void	ft_putnbr(int nb, int *count);
void	ft_putnbr_ui(unsigned int nb, int *count);
void	ft_putexa_lcase(unsigned int nb, int *count);
void	ft_putexa_ucase(unsigned int nb, int *count);
void	ft_putptr(void *ptr, int *count);
void	ft_putexa_ptr(unsigned long nb, int *count);

#endif