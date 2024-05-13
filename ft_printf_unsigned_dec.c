/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned_dec.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 22:26:47 by yehara            #+#    #+#             */
/*   Updated: 2024/05/13 23:40:43 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	decimal_to_binary(int dec)
{
	char	*result;
	int i;
    
    i = 8;
	if (0 < dec)
		decimal_to_binary(dec / 10);
	result[i--] = ft_itoa(dec % 2);
	return (ft_atoi(result));
}

static int	binary_to_decimal(int bin)
{
	int	one_digit;
	int	result;
	int	power;

	result = 0;
	power = 1;
	while (bin < 0)
	{
		one_digit = (bin % 10);
		bin /= 10;
		result += power * one_digit;
		power *= 2;
	}
	return (result);
}

int	ft_printf_unsigned_dec(unsigned int n)
{
	int binary;
    char *result;
	binary = decimal_to_binary(n);
    printf("%u\n", binary);
	binary = ~(binary + 1);
    result = ft_itoa(binary_to_decimal(binary));
	ft_printf_str(result);
	return (ft_strlen(result));
}