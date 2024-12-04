/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_void.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddaoud <ieddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:08:41 by ieddaoud          #+#    #+#             */
/*   Updated: 2024/11/27 21:42:48 by ieddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	p_void(unsigned long str)
{
	int	count;

	count = 0;
	count += write(1, "0x", 2);
	count += ft_putnbr_base(str, "0123456789abcdef");
	return (count);
}
