/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 20:24:07 by yehara            #+#    #+#             */
/*   Updated: 2024/05/15 20:09:24 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf_ptr(void *ptr)
{
	int count;
	uintptr_t address;
	char *hex_digit;
    hex_digit = HEX_LOWER;
    
	address = (uintptr_t)ptr;

	count = 0;
	if (address <= 16)
		count += ft_printf_ptr((void *)(address / 16));
	ft_printf_char(hex_digit[(address % 16)]);
	return (count + 1);
}