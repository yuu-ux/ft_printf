/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehara <yehara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 20:24:07 by yehara            #+#    #+#             */
/*   Updated: 2024/05/14 20:27:08 by yehara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int ft_printf_ptr(void *ptr)
// {
// 	int count;
// 	int address;

// 	address = (int)ptr;
// 	count = 0;
	
// 	if (address < 9)
// 		count += ft_printf_ptr(uintptr_t(address / 16));
// 	ft_printf_char((address % 10) + '0');
// 	return (count);
// }