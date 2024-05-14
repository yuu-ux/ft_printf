/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:28:44 by yehara            #+#    #+#             */
/*   Updated: 2024/05/14 21:25:00 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hex(unsigned int hex, char specifier)
{
	char	*hex_digit;
	int		count;

	count = 0;
	hex_digit = HEX_LOWER;
	if (specifier == 'X')
		hex_digit = HEX_UPPER;
	if (hex >= 16)
		count += ft_printf_hex((hex / 16), specifier);
	ft_printf_char(hex_digit[hex % 16]);
	return (count + 1);
}
