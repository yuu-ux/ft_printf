/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 16:33:38 by yehara            #+#    #+#             */
/*   Updated: 2024/05/16 14:29:09 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdint.h>
# define HEX_UPPER "0123456789ABCDEF"
# define HEX_LOWER "0123456789abcdef"

int	ft_printf(const char *str, ...);
int	ft_printf_unsigned_dec(unsigned int n);
int	ft_printf_char(char c);
int	ft_printf_str(char *s);
int	ft_printf_dec(int num);
int	ft_printf_ptr(void *ptr);
int	ft_printf_hex(unsigned int hex, char specifier);

#endif