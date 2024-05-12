/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 16:33:38 by yehara            #+#    #+#             */
/*   Updated: 2024/05/12 20:41:58 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include "libft/libft.h"
# define HEX_UPPER	"0123456789ABCDEF"
# define HEX_LOWER	"0123456789abcdef"

int	ft_printf(const char *str, ...);
int	handle_format(const char specifier, va_list args);
int	ft_printf_char(char c);
int	ft_printf_str(char *s);
int ft_printf_dec(int num);
int	ft_printf_ptr(void *ptr);
int	ft_printf_uint(unsigned int n);
int	ft_printf_hex(unsigned int n, const char specifier);

#endif