/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 20:24:10 by yehara            #+#    #+#             */
/*   Updated: 2024/05/15 20:09:41 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int print_formatted(const char specifier, va_list ap)
{
	int count;

	count = 0;
	if (specifier == 'c')
		count += ft_printf_char(va_arg(ap, int));
	else if (specifier == 's')
		count += ft_printf_str(va_arg(ap, char *));
	else if (specifier == 'p')
		count += ft_printf_ptr(va_arg(ap, void *));
	else if (specifier == 'd')
		count += ft_printf_dec(va_arg(ap, int));
	else if (specifier == 'i')
		count += ft_printf_dec(va_arg(ap, int));
	else if (specifier == 'u')
		count += ft_printf_unsigned_dec(va_arg(ap, unsigned int));
	else if (specifier == 'x')
		count += ft_printf_hex(va_arg(ap, unsigned int), specifier);
	else if (specifier == 'X')
		count += ft_printf_hex(va_arg(ap, unsigned int), specifier);
	else
		count += ft_printf_char(specifier);
	return (count);
}
int ft_printf(const char *str, ...)
{
	va_list ap;
	int count;

	count = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%' && *(str + 1))
		{
			count += print_formatted(*(str + 1), ap);
			str++;
		}
		else
			count += ft_printf_char(*str);
		str++;
	}
	va_end(ap);
	return (count);
}

int main(void)
{
	int b = 20;
	printf("%p\n", &b);
	ft_printf("%p\n", &b);
	return (0);
}