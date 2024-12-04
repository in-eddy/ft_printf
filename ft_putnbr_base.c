/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddaoud <ieddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 21:16:26 by ieddaoud          #+#    #+#             */
/*   Updated: 2024/11/27 19:40:44 by ieddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long nb, char *base)
{
	int				count;
	unsigned long	len;

	len = ft_strlen(base);
	count = 0;
	if (nb < len)
	{
		count += write(1, &base[nb], 1);
	}
	else
	{
		count += ft_putnbr_base(nb / len, base);
		count += ft_putnbr_base(nb % len, base);
	}
	return (count);
}
