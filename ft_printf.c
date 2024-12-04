/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddaoud <ieddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:47:15 by ieddaoud          #+#    #+#             */
/*   Updated: 2024/11/27 21:42:00 by ieddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	help(char c, va_list arg)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(arg, int));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(arg, int));
	else if (c == 's')
		count += ft_putstr(va_arg(arg, char *));
	else if (c == 'p')
		count += p_void(va_arg(arg, unsigned long));
	else if (c == 'u')
		count += unsi(va_arg(arg, unsigned int));
	else if (c == 'x')
		count += ft_putnbr_base(va_arg(arg, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		count += ft_putnbr_base(va_arg(arg, unsigned int), "0123456789ABCDEF");
	else
		count += ft_putchar(c);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		count;

	count = 0;
	if (write(1, 0, 0) == -1)
		return (-1);
	va_start(arg, str);
	while (*str != '\0')
	{
		if (*str == '%' && *(str + 1) != '\0')
			count += help(*(++str), arg);
		else if (*str != '%')
			count += ft_putchar(*(str));
		str++;
	}
	va_end(arg);
	return (count);
}
