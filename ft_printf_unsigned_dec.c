/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned_dec.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 22:26:47 by yehara            #+#    #+#             */
/*   Updated: 2024/05/14 17:06:06 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#define BINARY 32

static char *decimal_to_binary(int dec, char *result, int i)
{
	if (0 < dec)
		decimal_to_binary(dec / 2, result, i++);
	result[i++] = (dec % 2) + '0';
	return (result);
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
	char *bin;
	unsigned long long binary;
	char *result;
	int i;

	i = 0;
	if (n < 0)
		n *= -1;
	bin = (char *)ft_calloc(BINARY, sizeof(char));
	if (!bin)	
		return (0);
	binary = ft_atoi(decimal_to_binary(n, bin, i));
	printf("%llu", binary);
	binary = ~(binary) + 1;
    result = ft_itoa(binary_to_decimal(binary));
	ft_printf_str(result);
	return (ft_strlen(result));
}