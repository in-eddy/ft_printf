/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddaoud <ieddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 23:14:05 by ieddaoud          #+#    #+#             */
/*   Updated: 2024/11/27 21:43:41 by ieddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	unsi(unsigned int c)
{
	int	count;

	count = 0;
	if (c > 9)
		count += ft_putnbr(c / 10);
	c = c % 10 + 48;
	count += ft_putchar(c);
	return (count);
}
