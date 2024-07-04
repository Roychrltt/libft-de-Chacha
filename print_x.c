/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiaxu <xiaxu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:41:00 by xiaxu             #+#    #+#             */
/*   Updated: 2024/07/04 15:49:48 by xiaxu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_num_len(uintptr_t num, uintptr_t base)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num)
	{
		num = num / base;
		len++;
	}
	return (len);
}

void	put_num(uintptr_t num, char format, uintptr_t base)
{
	if (num >= base)
	{
		put_num(num / base, format, base);
		put_num(num % base, format, base);
	}
	else
	{
		if (num <= 9)
			print_c(num + '0');
		else
		{
			if (format == 'x')
				print_c(num - 10 + 'a');
			if (format == 'X')
				print_c(num - 10 + 'A');
		}
	}
}

int	print_x(unsigned int nb, char format)
{
	int	print_len;

	print_len = 0;
	print_len += get_num_len(nb, 16);
	put_num(nb, format, 16);
	return (print_len);
}

int	print_p(unsigned long long ptr)
{
	int			print_len;

	if (ptr == 0)
		return (write(1, "(nil)", 5));
	print_len = 0;
	print_len += write(1, "0x", 2);
	print_len += get_num_len((uintptr_t)ptr, 16);
	put_num((uintptr_t)ptr, 'x', 16);
	return (print_len);
}
