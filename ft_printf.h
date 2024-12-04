/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddaoud <ieddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:19:03 by ieddaoud          #+#    #+#             */
/*   Updated: 2024/11/27 21:33:14 by ieddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(int c);
int	ft_putnbr(int nb);
int	ft_strlen(char *str);
int	ft_putnbr_base(unsigned long nb, char *base);
int	ft_putstr(char *str);
int	p_void(unsigned long str);
int	unsi(unsigned int c);
int	ft_printf(const char *str, ...);

#endif
