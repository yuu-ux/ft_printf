/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 20:24:10 by yehara            #+#    #+#             */
/*   Updated: 2024/05/12 21:29:11 by yehara           ###   ########.fr       */
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
	// else if (specifier == 'p')
	// count += ft_printf_ptr(va_arg(ap, void *));
	else if (specifier == 'd')
		count += ft_printf_dec(va_arg(ap, int));
	// else if (specifier == 'i')
	// count += function_dec();
	// else if (specifier == 'u')
	// count += function_decimal();
	// else if (specifier == 'x')
	// count += function_hexadecimal();
	// else if (specifier == 'X')
	// count += function_hexadecimal();
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
		if (*str == '%' && *(str + 1)){
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
	ft_printf("%d\n", -10);
	// printf("%d\n", num);
	// printf("%d\n", ft_printf("%d\n", 10));
}